#include <boost/algorithm/string.hpp>
#include <boost/foreach.hpp>
#include <boost/test/unit_test.hpp>

#include "util.h"

BOOST_AUTO_TEST_SUITE(getarg_tests)

static void
ResetArgs(const std::string& strArg)
{
    std::vector<std::string> vecArg;
    boost::split(vecArg, strArg, boost::is_space(), boost::token_compress_on);

    // Insert dummy executable name:
    vecArg.insert(vecArg.begin(), "testbitcoin");

    // Convert to char*:
    std::vector<const char*> vecChar;
    BOOST_FOREACH(std::string& s, vecArg)
        vecChar.push_back(s.c_str());

    ParseParameters(vecChar.size(), &vecChar[0]);
}

BOOST_AUTO_TEST_CASE(boolarg)
{
    ResetArgs("-BSA");
    BOOST_CHECK(GetBoolArg("-BSA"));
    BOOST_CHECK(GetBoolArg("-BSA", false));
    BOOST_CHECK(GetBoolArg("-BSA", true));

    BOOST_CHECK(!GetBoolArg("-fo"));
    BOOST_CHECK(!GetBoolArg("-fo", false));
    BOOST_CHECK(GetBoolArg("-fo", true));

    BOOST_CHECK(!GetBoolArg("-BSAo"));
    BOOST_CHECK(!GetBoolArg("-BSAo", false));
    BOOST_CHECK(GetBoolArg("-BSAo", true));

    ResetArgs("-BSA=0");
    BOOST_CHECK(!GetBoolArg("-BSA"));
    BOOST_CHECK(!GetBoolArg("-BSA", false));
    BOOST_CHECK(!GetBoolArg("-BSA", true));

    ResetArgs("-BSA=1");
    BOOST_CHECK(GetBoolArg("-BSA"));
    BOOST_CHECK(GetBoolArg("-BSA", false));
    BOOST_CHECK(GetBoolArg("-BSA", true));

    // New 0.6 feature: auto-map -nosomething to !-something:
    ResetArgs("-noBSA");
    BOOST_CHECK(!GetBoolArg("-BSA"));
    BOOST_CHECK(!GetBoolArg("-BSA", false));
    BOOST_CHECK(!GetBoolArg("-BSA", true));

    ResetArgs("-noBSA=1");
    BOOST_CHECK(!GetBoolArg("-BSA"));
    BOOST_CHECK(!GetBoolArg("-BSA", false));
    BOOST_CHECK(!GetBoolArg("-BSA", true));

    ResetArgs("-BSA -noBSA");  // -BSA should win
    BOOST_CHECK(GetBoolArg("-BSA"));
    BOOST_CHECK(GetBoolArg("-BSA", false));
    BOOST_CHECK(GetBoolArg("-BSA", true));

    ResetArgs("-BSA=1 -noBSA=1");  // -BSA should win
    BOOST_CHECK(GetBoolArg("-BSA"));
    BOOST_CHECK(GetBoolArg("-BSA", false));
    BOOST_CHECK(GetBoolArg("-BSA", true));

    ResetArgs("-BSA=0 -noBSA=0");  // -BSA should win
    BOOST_CHECK(!GetBoolArg("-BSA"));
    BOOST_CHECK(!GetBoolArg("-BSA", false));
    BOOST_CHECK(!GetBoolArg("-BSA", true));

    // New 0.6 feature: treat -- same as -:
    ResetArgs("--BSA=1");
    BOOST_CHECK(GetBoolArg("-BSA"));
    BOOST_CHECK(GetBoolArg("-BSA", false));
    BOOST_CHECK(GetBoolArg("-BSA", true));

    ResetArgs("--noBSA=1");
    BOOST_CHECK(!GetBoolArg("-BSA"));
    BOOST_CHECK(!GetBoolArg("-BSA", false));
    BOOST_CHECK(!GetBoolArg("-BSA", true));

}

BOOST_AUTO_TEST_CASE(stringarg)
{
    ResetArgs("");
    BOOST_CHECK_EQUAL(GetArg("-BSA", ""), "");
    BOOST_CHECK_EQUAL(GetArg("-BSA", "eleven"), "eleven");

    ResetArgs("-BSA -bar");
    BOOST_CHECK_EQUAL(GetArg("-BSA", ""), "");
    BOOST_CHECK_EQUAL(GetArg("-BSA", "eleven"), "");

    ResetArgs("-BSA=");
    BOOST_CHECK_EQUAL(GetArg("-BSA", ""), "");
    BOOST_CHECK_EQUAL(GetArg("-BSA", "eleven"), "");

    ResetArgs("-BSA=11");
    BOOST_CHECK_EQUAL(GetArg("-BSA", ""), "11");
    BOOST_CHECK_EQUAL(GetArg("-BSA", "eleven"), "11");

    ResetArgs("-BSA=eleven");
    BOOST_CHECK_EQUAL(GetArg("-BSA", ""), "eleven");
    BOOST_CHECK_EQUAL(GetArg("-BSA", "eleven"), "eleven");

}

BOOST_AUTO_TEST_CASE(intarg)
{
    ResetArgs("");
    BOOST_CHECK_EQUAL(GetArg("-BSA", 11), 11);
    BOOST_CHECK_EQUAL(GetArg("-BSA", 0), 0);

    ResetArgs("-BSA -bar");
    BOOST_CHECK_EQUAL(GetArg("-BSA", 11), 0);
    BOOST_CHECK_EQUAL(GetArg("-bar", 11), 0);

    ResetArgs("-BSA=11 -bar=12");
    BOOST_CHECK_EQUAL(GetArg("-BSA", 0), 11);
    BOOST_CHECK_EQUAL(GetArg("-bar", 11), 12);

    ResetArgs("-BSA=NaN -bar=NotANumber");
    BOOST_CHECK_EQUAL(GetArg("-BSA", 1), 0);
    BOOST_CHECK_EQUAL(GetArg("-bar", 11), 0);
}

BOOST_AUTO_TEST_CASE(doubledash)
{
    ResetArgs("--BSA");
    BOOST_CHECK_EQUAL(GetBoolArg("-BSA"), true);

    ResetArgs("--BSA=verbose --bar=1");
    BOOST_CHECK_EQUAL(GetArg("-BSA", ""), "verbose");
    BOOST_CHECK_EQUAL(GetArg("-bar", 0), 1);
}

BOOST_AUTO_TEST_CASE(boolargno)
{
    ResetArgs("-noBSA");
    BOOST_CHECK(!GetBoolArg("-BSA"));
    BOOST_CHECK(!GetBoolArg("-BSA", true));
    BOOST_CHECK(!GetBoolArg("-BSA", false));

    ResetArgs("-noBSA=1");
    BOOST_CHECK(!GetBoolArg("-BSA"));
    BOOST_CHECK(!GetBoolArg("-BSA", true));
    BOOST_CHECK(!GetBoolArg("-BSA", false));

    ResetArgs("-noBSA=0");
    BOOST_CHECK(GetBoolArg("-BSA"));
    BOOST_CHECK(GetBoolArg("-BSA", true));
    BOOST_CHECK(GetBoolArg("-BSA", false));

    ResetArgs("-BSA --noBSA");
    BOOST_CHECK(GetBoolArg("-BSA"));

    ResetArgs("-noBSA -BSA"); // BSA always wins:
    BOOST_CHECK(GetBoolArg("-BSA"));
}

BOOST_AUTO_TEST_SUITE_END()

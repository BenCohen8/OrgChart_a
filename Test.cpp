#include "OrgChart.hpp"
#include "doctest.h"
#include "string.h"
using namespace ariel;
using namespace std;

TEST_CASE("test1")
{
    OrgChart org{};
    org.add_root(("abcd"));
    CHECK(org.isEmpty()==false);
    CHECK_THROWS(org.add_sub("efgbb","abcd"));//it's should be ("abcd","efgbb")
    CHECK_NOTHROW(org.add_sub("abcd","efgh"));
    CHECK_NOTHROW(org.add_sub("abcd","ijkl"));
    auto it=org.begin_level_order();
    //string x=it->Name;
    //CHECK(x=="cd");
    CHECK(++it!=org.end_level_order());
    auto xyz=org.begin_preorder();
        CHECK(xyz!=org.end_preorder());
    
};

TEST_CASE("test2")
{
    OrgChart org{};
    org.add_root(("abcd"));
    CHECK(org.isEmpty()==false);
    CHECK_THROWS(org.add_sub("efgbb","abcd"));//it's should be ("abcd","efgbb")
    CHECK_NOTHROW(org.add_sub("abcd","efgh"));
    CHECK_NOTHROW(org.add_sub("abcd","ijkl"));
    CHECK_NOTHROW(org.add_sub("ijkl","csdcds"));
    CHECK_NOTHROW(org.add_sub("ijkl","xyz"));
    CHECK_NOTHROW(org.add_sub("ijkl","abcf"));
    auto it=org.begin_level_order();

    CHECK(++it!=org.end_level_order());

};

TEST_CASE("test3")
{
    OrgChart org{};
    org.add_root(("efgh"));
    CHECK(org.isEmpty()==false);
    CHECK_THROWS(org.add_sub("efgbb","abcd"));//it's should be ("abcd","efgbb")
    CHECK_NOTHROW(org.add_sub("abcd","efgh"));
    CHECK_NOTHROW(org.add_sub("abcd","ijkl"));
    CHECK_NOTHROW(org.add_sub("xxvfvfdww","csdcds"));
    CHECK_NOTHROW(org.add_sub("ijkl","xyz"));
    CHECK_NOTHROW(org.add_sub("abcdefgh","abcf"));
    auto it=org.begin_level_order();

    CHECK(++it!=org.end_level_order());

};
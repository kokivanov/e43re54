#include "gtest\gtest.h"
#include "../../lib/mt/mt.hpp"
#include <vector>

TEST(GCommonTestSuite, SumOfArray)
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};
    ASSERT_EQ(mt::sum(vec), 36);
}

TEST(GCommonTestSuite, MinOfArray)
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};
    ASSERT_EQ(mt::min(vec), 1);
}

TEST(GCommonTestSuite, MaxOfArray)
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};
    ASSERT_EQ(mt::max(vec), 8);
}

TEST(GCommonTestSuite, AverageOfArray)
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};
    ASSERT_EQ(mt::average(vec), 4);
}

int foo(const int& x) { return x*2; }

TEST(GCommonTestSuite, SumRuleOfArray)
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};
    ASSERT_EQ(mt::sum_rule(vec, foo), 72);
}
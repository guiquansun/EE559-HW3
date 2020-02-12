#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(TwoSum1Should, ReturnTwoSum1) {
  Solution solution;
  std::vector<int> inputs1 = {1, 4, 7, 11};
  int sum1 = 8;
  std::vector<int> expected1 = {0, 2};
  std::vector<int> result1 = solution.TwoSum(inputs1, sum1);
  EXPECT_EQ(expected1, result1);
}

TEST(TwoSum2Should, ReturnTwoSum2) {
  Solution solution;
  std::vector<int> inputs2 = {2, 4, 8, 6};
  int sum2 = 100;
  std::vector<int> expected2 = {};
  std::vector<int> result2 = solution.TwoSum(inputs2, sum2);
  EXPECT_EQ(expected2, result2);
}

TEST(TwoSum3Should, ReturnTwoSum3) {
  Solution solution;
  std::vector<int> inputs3 = {1, 2, 6, 5};
  int sum3 = 7;
  std::vector<int> expected3_1 = {0, 2};
  std::vector<int> expected3_2 = {1, 3};
  std::vector<int> result3 = solution.TwoSum(inputs3, sum3);
  EXPECT_EQ(expected3_1, result3);
}
#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(ValidBrackets1Should, ReturnValidBrackets1) {
  Solution solution;
  std::string inputs1 = "";
  bool result1 = solution.ValidBrackets(inputs1);
  bool expected1 = 1;
  EXPECT_EQ(expected1, result1);
}

TEST(ValidBrackets2Should, ReturnValidBrackets2) {
  Solution solution;
  std::string inputs2 = "{[a]+b}";
  bool result2 = solution.ValidBrackets(inputs2);
  bool expected2 = 1;
  EXPECT_EQ(expected2, result2);
}

TEST(ValidBrackets3Should, ReturnValidBrackets3) {
  Solution solution;
  std::string inputs3 = "[woshini(nishi}sha]";
  bool result3 = solution.ValidBrackets(inputs3);
  bool expected3 = 0;
  EXPECT_EQ(expected3, result3);
}

TEST(ValidBrackets4Should, ReturnValidBrackets4) {
  Solution solution;
  std::string inputs4 = "abcd%%(88)++{q]))";
  bool result4 = solution.ValidBrackets(inputs4);
  bool expected4 = 0;
  EXPECT_EQ(expected4, result4);
}


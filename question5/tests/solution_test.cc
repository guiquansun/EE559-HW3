#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(CheckOperatoraddadd, GoAbove100) {
  AcademicRecord example(91,92,93);
  example++;
  int expected_Maths = 100;
  int expected_Computers = 100;
  int expected_Physics = 100;
  int actual_Maths = example.Maths;
  int actual_Computers = example.Computers;
  int actual_Physics = example.Physics;
  EXPECT_EQ(expected_Maths, actual_Maths);
  EXPECT_EQ(expected_Computers, actual_Computers);
  EXPECT_EQ(expected_Physics, actual_Physics);
}

TEST(CheckOperatorminusminus, GoABelow0) {
  AcademicRecord example(5,6,7);
  example--;
  int expected_Maths = 0;
  int expected_Computers = 0;
  int expected_Physics = 0;
  int actual_Maths = example.Maths;
  int actual_Computers = example.Computers;
  int actual_Physics = example.Physics;
  EXPECT_EQ(expected_Maths, actual_Maths);
  EXPECT_EQ(expected_Computers, actual_Computers);
  EXPECT_EQ(expected_Physics, actual_Physics);
}



TEST(CheckOperatorplusplus, ReturnShouldWork) {
  AcademicRecord example(20,15,70);
  example++;
  int expected_Maths = 30;
  int expected_Computers = 25;
  int expected_Physics = 80;
  int actual_Maths = example.Maths;
  int actual_Computers = example.Computers;
  int actual_Physics = example.Physics;
  EXPECT_EQ(expected_Maths, actual_Maths);
  EXPECT_EQ(expected_Computers, actual_Computers);
  EXPECT_EQ(expected_Physics, actual_Physics);
}

TEST(CheckOperatorMinusMinusMinus, ReturnShouldWork1) {
  AcademicRecord example(30,30,70);
  example--;
  int expected_Maths = 10;
  int expected_Computers = 10;
  int expected_Physics = 50;
  int actual_Maths = example.Maths;
  int actual_Computers = example.Computers;
  int actual_Physics = example.Physics;
  EXPECT_EQ(expected_Maths, actual_Maths);
  EXPECT_EQ(expected_Computers, actual_Computers);
  EXPECT_EQ(expected_Physics, actual_Physics);
}

TEST(CheckOperatorPlusEqual, ReturnShouldWork2) {
  AcademicRecord example(20,15,70);
  example+=8;
  int expected_Maths = 28;
  int expected_Computers = 23;
  int expected_Physics = 78;
  int actual_Maths = example.Maths;
  int actual_Computers = example.Computers;
  int actual_Physics = example.Physics;
  EXPECT_EQ(expected_Maths, actual_Maths);
  EXPECT_EQ(expected_Computers, actual_Computers);
  EXPECT_EQ(expected_Physics, actual_Physics);
}

TEST(CheckOperatorMinusEqual, ReturnShouldWork3) {
  AcademicRecord example(15,16,95);
  example-=14;
  int expected_Maths = 1;
  int expected_Computers = 2;
  int expected_Physics = 81;
  int actual_Maths = example.Maths;
  int actual_Computers = example.Computers;
  int actual_Physics = example.Physics;
  EXPECT_EQ(expected_Maths, actual_Maths);
  EXPECT_EQ(expected_Computers, actual_Computers);
  EXPECT_EQ(expected_Physics, actual_Physics);
}

TEST(CheckOperatorequalequal, ReturnShouldWork4) {
  AcademicRecord a(15,12,95);
  AcademicRecord b = a;
  bool actual = (a == a);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}

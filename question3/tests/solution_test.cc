#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(EmptyShould, ReturnEmpty) {

  std::vector<int> inputs = {3, 4, 5};
  SinglyLinkedList example(inputs, -1);
  bool expected = 0;
  bool result = example.empty();
  EXPECT_EQ(expected, result);
  
}

TEST(SizeShould, ReturnSize) {
 
  std::vector<int> inputs = {3, 4, 5};
  SinglyLinkedList example(inputs, -1);
  int expected2 = 3;
  int result2 = example.size();
  EXPECT_EQ(expected2, result2);
}

TEST(PushBackShould, ReturnPushBack) {
  std::vector<int> inputs = {3, 4, 5};
  SinglyLinkedList example(inputs, -1);
  example.push_back(4);
  int expected = 4;
  int result = example.size();
  EXPECT_EQ(expected, result);
}

TEST(PushFrontShould, ReturnPushFront) {
  std::vector<int> inputs = {3, 4, 5};
  SinglyLinkedList example(inputs, -1);
  example.push_front(4);
  int expected = 4;
  int result = example.size();
  EXPECT_EQ(expected, result);
}

TEST(PopBackShould, ReturnPopBack) {
  std::vector<int> inputs = {3, 4, 5};
  SinglyLinkedList example(inputs, -1);
  example.pop_back();
  int expected = 2;
  int result = example.size();
  EXPECT_EQ(expected, result);
}

TEST(PopFrontShould, ReturnPopFront) {
  std::vector<int> inputs = {3, 4, 5};
  SinglyLinkedList example(inputs, -1);
  example.pop_front();
  int expected = 2;
  int result = example.size();
  EXPECT_EQ(expected, result);
}

TEST(BackShould, ReturnBack) {
  std::vector<int> inputs = {3, 4, 5};
  SinglyLinkedList example(inputs, -1);
  int expected = 5;
  int result = example.back();
  EXPECT_EQ(expected, result);
}

TEST(FrontShould, ReturnFront) {
  std::vector<int> inputs = {3, 4, 5};
  SinglyLinkedList example(inputs, -1);
  int expected = 3;
  int result = example.front();
  EXPECT_EQ(expected, result);
}

TEST(GetBackPointerShould, ReturnGetBackPointer) {
  std::vector<int> inputs = {3, 4, 5};
  SinglyLinkedList example(inputs, -1);
  ListNode *p = example.GetBackPointer();
  int expected = 5;
  int result = p->val;
  EXPECT_EQ(expected, result);
}

TEST(GetIthPointerShould, ReturnGetIthPointer) {
  std::vector<int> inputs = {3, 4, 5};
  SinglyLinkedList example(inputs, -1);
  ListNode *p = example.GetIthPointer(2);
  int expected = 4;
  int result = p->val;
  EXPECT_EQ(expected, result);
}

TEST(InsertAfterShould, ReturnInsertAfter) {
  std::vector<int> inputs = {3, 4, 5};
  SinglyLinkedList example(inputs, -1);
  ListNode *p = example.GetIthPointer(2);
  example.insert_after(p, 2);
  ListNode *q = example.GetIthPointer(3);
  int expected = 2;
  int result = q->val;
  EXPECT_EQ(expected, result);
}

TEST(EraseShould, ReturnErase) {
  std::vector<int> inputs = {3, 4, 5};
  SinglyLinkedList example(inputs, -1);
  ListNode *p = example.GetIthPointer(2);
  example.erase(p);
  int expected = 2;
  int result = example.size();
  EXPECT_EQ(expected, result);
}








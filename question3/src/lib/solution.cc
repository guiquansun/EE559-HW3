#include "solution.h"
#include "iostream"

// the time complexity is O(1)
bool SinglyLinkedList::empty() {
  return head_ == nullptr;
}

// the time complexity is O(n)
int SinglyLinkedList::size() {
  if (head_ == nullptr) {
    return 0;
  }
  int count = 1;
  ListNode *dummy = head_;
  
  while (dummy->next != nullptr) {
    dummy = dummy->next;
    count = count + 1;
  }
  return count;
}

// the time complexity is O(n)
void SinglyLinkedList::push_back(int i) {
  if (head_ == nullptr) {
    head_ = new ListNode(i);
    return;
  }
  ListNode *p = head_;
  ListNode *p_prev = new ListNode(0);
  while (p != nullptr) {
    p_prev = p;
    p = p->next;
  }
  ListNode *newNode = new ListNode(i);
  p_prev->next = newNode;

}

// the time complexity is O(1)
void SinglyLinkedList::push_front(int i) {
  if (head_ == nullptr) {
    head_ = new ListNode(i);
    return;
  }

  ListNode *record = head_;
  head_ = new ListNode(i);
  head_->next = record;

}

// the time complexity is O(1)
void SinglyLinkedList::insert_after(ListNode *p, int i){
  ListNode *newNode = new ListNode(i);
  newNode->next = p->next;
  p->next = newNode;
}

// the time complexity is 
void SinglyLinkedList::erase(ListNode *p) {

  ListNode *newNode = head_;
  while (newNode->next != p) {
    newNode = newNode->next;
  }
  newNode->next = p->next;
  p->next = nullptr;
}

// the time complexity is O(1)
void SinglyLinkedList::pop_front() {
  if (empty()) return;
  head_ = head_->next;
}

// the time complexity is O(n)
void SinglyLinkedList::pop_back() {
  if (empty()) return;
  ListNode *record = head_;

  if (record->next == nullptr){
    head_ = nullptr;
  }

  while(record -> next -> next != nullptr){
    record = record -> next;
  }
  record -> next = nullptr;
  
 
}
// the time complexity is O(n)
int SinglyLinkedList::back() {
  if (empty()) return INT_MAX;

  ListNode *record = head_;

  while(record->next != nullptr)
  {
    record = record->next;
  }
  return record->val;

}

// the time coplexity is O(1) 

int SinglyLinkedList::front() {
  if (empty()) return INT_MAX;

  return head_->val;

}

// the time complexity is O(n)

ListNode *SinglyLinkedList::GetBackPointer() {
  if (empty()) return nullptr;

  ListNode *p = head_;
  ListNode *p_prev = new ListNode(0);
  while (p != nullptr) {
    p_prev = p;
    p = p->next;
  }

  return p_prev;
}
// the time complexity is O(n)
ListNode *SinglyLinkedList::GetIthPointer(int i) {
  if (empty()) return nullptr;
  ListNode *record = head_;

  while(i != 1) {
    record = record->next;
    i = i - 1;
  }
  return record;
}
// the time complexiy is O(n)

void SinglyLinkedList::print() {
  if (empty()) {printf("{}\n"); return;}
  ListNode *newNode = head_;
  std::cout <<'{';
  while(newNode->next!= nullptr){
    std::cout << newNode->val << ',';
    newNode = newNode->next;
  }

  std::cout <<newNode->val <<'}';
}












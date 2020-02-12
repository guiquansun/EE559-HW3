#include "solution.h"
#include <stack>
#include <string>

bool Solution::ValidBrackets(std::string &inputs) { 
  std::stack<char> recordstack;
   if (inputs == "") {
    return true;
  }
 
  for (int i = 0; i < inputs.length(); i++) {
    if (inputs[i] == '(' || inputs[i] == '[' || inputs[i] == '{') {

      recordstack.push(inputs[i]);
    }
    
    if (inputs[i] == ')') {

      if (recordstack.top() != '(') {
        return false;
      }
      else {
        recordstack.pop();
      }

    }

    if (inputs[i] == ']') {

      if (recordstack.top() != '[') {
        return false;
      }
      else {
        recordstack.pop();
      }

    }

    if (inputs[i] == '}') {

      if (recordstack.top() != '{') {
        return false;
      }
      else {
        recordstack.pop();
      }

    }

  }

  if (recordstack.size() == 0) {
    return true;
  }
  else {
    return false;
  }

}


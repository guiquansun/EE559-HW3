#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class AnswerQuestion{

private:

  vector<int>::iterator trackcurlocation;
  vector<int> v;

public:
  
  void InitialCurrLocation(vector<int> vec){
    v = vec;
    trackcurlocation = v.begin();
  }

  void ShowVector();
  void ShowMenu();
  void ReportFirstElement();
  void ReportLastElement();
  void ReportCurrentElement();
  void ReportithElement (int i);

};

#endif
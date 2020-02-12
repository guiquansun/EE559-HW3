#include "solution.h"
#include <map>


std::vector<int> Solution::TwoSum(std::vector<int> &inputs, int sum) {

  std::vector<int> empty;
  std::vector<int> result;
  std::map<int, int> record;

  if (inputs.size() == 0 || inputs.size() == 1) {
    return empty;
  }

  for (int i = 0; i < inputs.size(); i++) {

    if (record.find(sum - inputs[i]) == record.end()) {
      record.insert(std::pair<int, int>(inputs[i], i));
    }
    else {
      int firstindex = record[sum - inputs[i]];
      result.push_back(firstindex);
      result.push_back(i);
      return result;
    }

  }
  return empty;
  
} 


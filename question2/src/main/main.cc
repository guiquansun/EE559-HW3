#include <iostream>
#include "src/lib/solution.h"


void printVector(std::vector<int> &input) {
  for (int i = 0; i < input.size(); i++) {
    std::cout << input[i] << " ";
  }
  std::cout << std::endl;
}


int main()
{
    Solution solution ;
   
    std::vector<int> inputs1 = {3, 7, 11, 15};
    int sum1 = 10;
    printVector(inputs1);
    std::vector<int> result1 = solution.TwoSum(inputs1, sum1);
    printVector(result1);
  
    std::vector<int> inputs2 = {3, 7, 11, 15};
    int sum2 = 180;
    printVector(inputs2);
    std::vector<int> result2 = solution.TwoSum(inputs2, sum2);
    printVector(result2);
  
    std::vector<int> inputs3 = {1, 4, 3, 2};
    int sum3 = 5;
    printVector(inputs3);
    std::vector<int> result3 = solution.TwoSum(inputs3, sum3);
    printVector(result3);
  

    return EXIT_SUCCESS;
}
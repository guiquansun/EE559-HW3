#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::string inputs1 = "(a+b)";
    bool result1 = solution.ValidBrackets(inputs1);
    if (result1 == 1) {

        std::cout << "inputs: (a+b), output: true" << std::endl;
    }
    else {
        std::cout << "inputs: (a+b), output: false" << std::endl;
    }
    

    std::string inputs2 = "(a+b)[c*d]{5g+h}";
    bool result2 = solution.ValidBrackets(inputs2);
    if (result2 == 1) {
        std::cout << "inputs: (a+b)[c*d]{5g+h}, output: true" << std::endl;

    }
    else {
        std::cout << "inputs: (a+b)[c*d]{5g+h}, output: false" << std::endl;  
    }
    
    std::string inputs3 = "(a+b]";
    bool result3 = solution.ValidBrackets(inputs3);
    if (result3 == 1) {
        std::cout << "inputs: (a+b], output: true" << std::endl;
    }
    else {
        std::cout << "inputs: (a+b], output: false" << std::endl;
    }

    std::string inputs4 = "(7h+[5c)+7]";
    bool result4 = solution.ValidBrackets(inputs4);
    if (result4 == 1) {
        std::cout << "inputs: 7h+[5c)+7], output: true" << std::endl;
    }
    else {
        std::cout << "inputs: 7h+[5c)+7], output: false" << std::endl;
    }
    
    std::string inputs5 = "{2k+[5j]}";
    bool result5 = solution.ValidBrackets(inputs5);
    if (result5 == 1) {
        std::cout << "inputs: {2k+[5j]}, output: true" << std::endl;
    }
    else {
        std::cout << "inputs: {2k+[5j]}, output: false" << std::endl;
    }

    std::string inputs6 = "{2k++[5--*j]}";
    bool result6 = solution.ValidBrackets(inputs6);
    if (result6 == 1) {
        std::cout << "inputs: {2k++[5--*j]}, output: true" << std::endl;
    }
    else {
        std::cout << "inputs: {2k++[5--*j]}, output: false" << std::endl;
    }

    return EXIT_SUCCESS;
}
#include <iostream>
#include "src/lib/solution.h"


int main()
{
    AcademicRecord obj1, obj2;
    obj1.Maths = 5; 
    obj1.Computers = 10;
    obj1.Physics = 95; 
     
    std::cout<< "Value before incrementation::" << std::endl;
    obj1.print(); 
    obj1++; 
    std::cout<< "Value after incrementation::" << std::endl;
    obj1.print(); 
    obj1--; 
    std::cout<< "Value after decrementation::" << std::endl;
    obj1.print(); 
    obj2 = obj1;
    std::cout<< "Value of Object 2::" << std::endl;
    obj2.print(); 
    obj2 += 50; 
    std::cout<< "Value of Object 2 after increasing marks by 50 for each subject::" << std::endl;
    obj2.print();
    obj2 -= 30; 
    std::cout<< "Value of Object 2 after decreasing marks by 30 for each subject::" << std::endl;
    obj2.print();    
    return EXIT_SUCCESS;
}
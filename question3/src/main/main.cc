#include <iostream>
#include "src/lib/solution.h"

int main()
{
    SinglyLinkedList singlylinkedlist;
    bool i = singlylinkedlist.empty();
    
    
    if (i) {
        std::cout << "it is empty right now" << std::endl;
    }

    
    std::vector<int> inputs = {7, 2, 3};
    SinglyLinkedList a(inputs, -1);
    
    
    int j = a.empty();
    if (j == 0) {
        std::cout << "it is not empty right now" << std::endl;
    }
    a.print();
    std::cout<<'\n';
    std::cout << "current size: " << a.size()<< std::endl;
    a.push_back(3);
    
    std::cout << "after push_back, current size: " << a.size()<< std::endl;
    a.push_front(2);
    std::cout << "after push_front, current size: " << a.size()<< std::endl;
    a.pop_front();
    std::cout << "after pop_front, current size: " << a.size()<< std::endl;
    a.pop_back();
    std::cout << "after pop_back, current size: " << a.size()<< std::endl;
    std::cout << "the last element: " << a.back()<< std::endl;
    std::cout << "the first element: " << a.front()<< std::endl;
    std::cout << "After GetBackPointer operation, the node value is: " << a.GetBackPointer()->val<< std::endl;
    std::cout << "After GetIthPointer operation, i = 2, the node value is: " << a.GetIthPointer(2)->val<< std::endl;

    ListNode *p = a.GetIthPointer(2);
    a.insert_after(p, 5);
    std::cout << "After insert_after operator, p->val = 2, i = 5: " << std::endl;
    a.print();
    std::cout<<'\n';

    ListNode *q = a.GetIthPointer(3);
    a.erase(q);
    std::cout << "After erase operator, q->val = 5" << std::endl;
    a.print();
    std::cout<<'\n';
    
    

    return EXIT_SUCCESS;
}


#include <iostream>
#include "src/lib/solution.h"

int main()
{
    AnswerQuestion answerQuestion ;
    vector<int> vec ={1, 4, 5, 23, 100, 12, 18, 175};
    answerQuestion.InitialCurrLocation(vec);
    int choice=0; 
    while(choice !=5){
        answerQuestion.ShowMenu();
        cin>>choice;
        if (choice == 1) {
            answerQuestion.ReportFirstElement();
        }
        if (choice == 2) {
            answerQuestion.ReportLastElement();
        }

        if (choice == 3) {
            answerQuestion.ReportCurrentElement();
        }
        if (choice == 4) {

            cout<<"Enter the value of i::"<<endl;
            int i;
            cin>>i;
            answerQuestion.ReportithElement (i);
        }
        if (choice == 5) {
            cout << "Exit!"<<endl;
            break;
        }
           
        
    }

    return EXIT_SUCCESS;
}
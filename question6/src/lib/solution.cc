#include "solution.h"
using namespace std;
#include <iostream>

void AnswerQuestion::ShowVector() {
    if (v.size() == 0) {
        cout << "[]";
    }
    else {
        cout<< "[";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << ",";
            
        }
        cout << "\b]";
        cout << endl;
    }
}

void AnswerQuestion::ShowMenu() {
    cout<<"**********************************************************"<<endl;
    cout<<"*"<<endl;
    cout<<"Vector: ";
    AnswerQuestion::ShowVector();
    cout<<"**********************************************************"<<endl;
    cout<<"*"<<endl;
    cout<<"Please choose any of the following options: "<<endl;
    cout<<"1. What is the first element?"<<endl;
    cout<<"2. What is the last element? "<<endl;
    cout<<"3. What is the current element?"<<endl;
    cout<<"4. What is the ith element from the current location?"<<endl;
    cout<<"5. Exit."<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<"*"<<endl;

}

void AnswerQuestion::ReportFirstElement() {
    trackcurlocation = v.begin();
    int n = *trackcurlocation;
    cout<< "output: "<< n <<endl;
}

void AnswerQuestion::ReportLastElement() {
    trackcurlocation = v.end() - 1;
    int n = *trackcurlocation;
    cout<< "output: "<< n << endl;
}

void AnswerQuestion::ReportCurrentElement() {
    cout <<"output: "<< *trackcurlocation<< endl;
}
void AnswerQuestion::ReportithElement (int i) {

    if (i < 0) {

        cout<< "Value of i cannot be negative"<<endl;
    }

    if (i > v.size()) {
        cout<< "Value of i cannot be greater than the size of vector"<<endl;
    }

    if ((trackcurlocation - v.begin() + i + 1) > v.size()) {
        cout<< "Sorry! You cannot traverse "<<i<<" elements from your current location."<<endl;
    }
    else {

        trackcurlocation = trackcurlocation  + i;
        cout <<"output: "<< *trackcurlocation<<endl;

    }
       

}




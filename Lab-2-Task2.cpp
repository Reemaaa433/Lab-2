#include <iostream>
using namespace std;

int main (){
    int num1, num2;
    char op;
    cout<< "Enter the first number :\n";
    cin>> num1;
    cout<< "Enter the second number :\n";
    cin>> num2;
    cout<< "Enter operation (+,-,*,/):\n";
    cin>>op;
    if (op =='+')
        cout<< "The result="<<num1+num2;
    else if (op =='-')
        cout<< "The result="<<num1-num2;
    else if (op =='*')
        cout<<"The result="<<num1*num2;
    else if (op =='/')
        if(num2==0)
            cout<<"the denominator must be diffrent of zero";
        else
            cout<<"The result="<<num1/num2;
    else
        cout<<"Entered wrong input ";
return 0;
}
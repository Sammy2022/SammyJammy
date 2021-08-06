//
//  main.cpp
//  Calculator
//
//  Created by samarth kumar on 06/08/21.
//
/* Calculator using switch case*/
#include<iostream>
using namespace std;

int main()
{
    char oper;
    float num1,num2;
    cout<<" Please Enter 2 Numbers:"<<endl;
    cin>>num1>>num2;
    
    cout<<"Enter an operation(+,-,*,/):"<<endl;
    cin>>oper;
    
    switch(oper)
    {
        case'+': cout<<num1<<"+"<<num2<<"="<<num1+num2;
            break;
        case'-': cout<<num1<<"-"<<num2<<"="<<num1-num2;
            break;
        case'*': cout<<num1<<"*"<<num2<<"="<<num1*num2;
            break;
        case'/': cout<<num1<<"/"<<num2<<"="<<num1/num2;
            break;
        default: cout<<"Error!! You've Entered the wrong operand"<<endl;
    }
    return 0;
}

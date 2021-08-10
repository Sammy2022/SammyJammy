//
//  main.cpp
//  Power
//
//  Created by samarth kumar on 06/08/21.
//
/* To raise a number m by n and takind deafult value as 2 if value of n is not entered */

#include<iostream>
using namespace std;

void power(double base, int exp = 2 )
{
    double ans = 1;
    for(int i=1;i<=exp;i++)
    {ans=ans*base;}
    cout<<ans;
}

int main()

{   int n;
    double m;
    char ch;
    
    cout<<"Enter Base Value"<<endl;
    cin>>m;
    
    cout<<" Do you want to input Exponent Value (Y/N)?"<<endl;
    cin>>ch;
    
    if((ch=='y')||(ch=='Y'))              // For comparing both uppercase and lowercase letters as input by the user//
    { cout<<" Enter Exponent Value"<<endl;
      cin>>n;
      power(m,n); }
    else{
        power(m);
    }
    return 0;
}

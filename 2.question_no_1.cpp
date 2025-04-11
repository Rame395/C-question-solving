// 1. Write a C++ program that takes two floating point numbers as input and prints
// their sum.

#include <iostream>
// #include <cmath>
using namespace std;

int main(){
    double a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    double total=a+b;
    cout<<a<<"+"<<b<<"= "<<total;
    return 0;
}


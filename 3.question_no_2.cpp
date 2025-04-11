// 2. Create a C++ program that checks whether a given integer is odd or even.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num%2==0){
        cout<<num <<" is"<<" Even Number! ";
    }
    else{
        cout<<num <<" is "<<"Odd Number! ";
    }
    return 0;
}
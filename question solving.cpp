#include <iostream>
using namespace std;


// 1. program to print table of numbers from 1 to 20 //nested for loops
// int main(){
//     for(int i=1;i<21;i++){
//         cout<<"Table of "<<i<<endl;
//         for(int j=1;j<11;j++){
//             cout<<i <<"*"<<j<<"="<<i*j<<endl;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
    

// 2. Program to find the mean of n numbers using array  

// int main(){
//     int size;
//     cout<<"Enter size of an array: ";
//     cin>>size;
//     double sum=0.0;
//     double final;
    
//     int mean[size];
//     for(int i=0;i<size;i++){
//        cout<<"Enter no "<<i+1<<": ";
//        cin>>mean[i];
//        sum+=mean[i];
//     }

  
//     final=sum/size;
//     cout<<"The mean of the entered no: "<<endl;
//     cout<<final;

    
// 3.find factorial of certain number
//     return 0;
// }


// int main(){
//     int mul;
//     cout<<"Enter no which you are to factorial: ";
//     cin>>mul;
//     int factorial=1;
//     for(int i=1;i<=mul;i++){
//         factorial*=i;
//     }
//     cout<<"The factorial of "<<mul<<" is: "<<factorial;
// return 0;


// }


// Addition of matrix
// int main(){
//     int row1,column1,row2,column2;
//     cout<<"Enter row and column of first matrix:" <<"\n";
//     cout<<"Enter no of row: ";
//     cin>>row1;
//     cout<<"Enter no of column: ";
//     cin>>column1;

//     int a[row1][column1];
//     for(int i=0;i<row1;i++){
//         for(int j=0;j<column1;j++){
//             cin>>a[i][j];
//         }
//     }

//     cout<<"Enter row and column of second matrix: "<<"\n";
//     cout<<"Enter no of row: ";
//     cin>>row2;
//     cout<<"Enter no of column: ";
//     cin>>column2;

//     int b[row2][column2];
//     for(int i=0;i<row2;i++){
//         for(int j=0;j<column2;j++){
//             cin>>b[i][j];
//         }
//     }
//     int c[row1][column1];
//     for(int i=0;i<row1;i++){
//         for(int j=0;j<column1;j++){
//             c[i][j]=a[i][j]+b[i][j];
//             cout<<c[i][j]<<"|";
//         }
//     }
//     return 0;
// }


// int main(){
//     int a;

//     cin>>a;

//     if(a==0)
//         cout<<"hello";
    
//     else
//         cout<<"world";
    

//     return 0;
// }


int main(){
    int x , y ;
    x=4;
    y=2;
    cout << x / y;
    

    return 0;
}
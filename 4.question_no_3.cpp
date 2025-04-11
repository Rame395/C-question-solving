// 3. Write a function that takes a pointer to an array of integers and its size, then
// prints each element.

#include <iostream>
using namespace std;

void calculation(int* arr,int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    cout<<"Size of an array: "<<size;
}

int main(){
    int arr[]={1,3,5,7,8,10,2,4,6};
    
    int size=sizeof(arr)/sizeof(arr[0]);

    calculation(arr,size);

    
    return 0;
} 




// without using pointer-only change in parameter section insted of int* arr there is int arr[]

// void calculation(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

// }

// int main(){
//     int arr[]={1,3,5,7,8,10,2,4,6};

//     int size=sizeof(arr)/sizeof(int);

//     calculation(arr,size);

//     return 0;
// }


        
        
         
         
    
    
    


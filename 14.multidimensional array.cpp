#include <iostream>

using namespace std;


// Two dimensional array
// int main(){
//     int row,column;
//     cout<<"Enter no. of rows:";
//     cin>>row;
//     cout<<"Enter no. of columns:";
//     cin>>column;

//     int two_dim[row][column];
//     for (int i = 0; i < row; i++){
//         for(int j=0;j<column;j++){
//             cout<<"Enter element at "<<"["<<i<<"]"<<"["<<j<<"]: ";
//             cin>>two_dim[i][j];
//         }
//     }
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             cout<<two_dim[i][j]<<" | ";
//         }
//         cout<<"\n";
//     }
    
//     return 0;
// }
           
    

// three dimensional array
// int main(){
//     int row,column,layer;
//     cout<<"Enter no. of layer: ";
//     cin>>layer;
//     cout<<"Enter no. of row: ";
//     cin>>row;
//     cout<<"Enter no. of column: ";
//     cin>>column;

//     int three_dim[layer][row][column];
//     for(int i=0;i<layer;i++){
//         for(int j=0;j<row;j++){
//             for(int k=0;k<column;k++){
//                 cout<<"Enter element at ["<<i<<"] ["<<j<<"] ["<<k<<"] :" ;
//                 cin>>three_dim[i][j][k];
//             }
//         }
//     }

//     cout<<"The 3D array is:";
//     for(int i=0;i<layer;i++){
//         cout<<"layer no. "<<i+1<<"\n";
//         for(int j=0;j<row;j++){
//             for(int k=0;k<column;k++){
//                 cout<<three_dim[i][j][k]<<" | ";
//             }
//             cout<<"\n";
//         }
//         cout<<"\n";
//     }

 
    
//     return 0;
// }
    

    
















  
   
// int main(){
//     int row,column;
  
//     cout<<"Enter no. of rows: ";
//     cin>>row;
//     cout<<"Enter no. of column: ";
//     cin>>column;

//     int matrix[row][column];

//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//            cout<<"Enter temperature: ";
//             cin>>matrix[i][j];
//         }
//     }
    
//     cout<< "   "<<"sunday"<<"   |    "<<"monday"<<"  |    "<<"Tuesday" <<"\n";
  
//     for(int i=0;i<row;i++){
//         if (i==0){
//             cout<<"Kathmandu";
//         }
//         else{
//             cout<<"Pokhara";
//         }
//         for(int j=0;j<column;j++){
//             cout<<"            "<<matrix[i][j]<<  "      ";
//         }
//         cout<<"\n";
//     }


//     return 0;
// }



// addition of two matrix

// int main(){
//     int a[2][2],b[2][2],c[2][2];
//     cout<<"Enter no. in first matrix :"<<"\n";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cin>>a[i][j];
            
//         }
//     }
//     cout<<"first matrix:"<<"\n";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout<<a[i][j]<<" | ";
            
//         }
//         cout<<"\n";
//     }
    
    
//     cout<<"Enter second matrix: "<<"\n";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cin>>b[i][j];
//         }
//     }

    
//     cout<<"Second matrix :"<<"\n";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout<<b[i][j]<<" | ";
            
//         }
//         cout<<"\n";
//     }


//     cout<<"Result of Adding two matrix:"<<"\n";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             c[i][j]=a[i][j]+b[i][j];
//             cout<<c[i][j]<<"\t";
//         }
//         cout<<"\n";
//     }

//     return 0;
// }






// int main(){
//     int rowA,rowB,columnA,columnB;
//     cout<<"Enter no. of rowA: ";
//     cin>>rowA;
//     cout<<"Enter no. of rowA: ";
//     cin>>rowB;
//     cout<<"Enter no. of rowA: ";
//     cin>>columnA;
//     cout<<"Enter no. of rowA: ";
//     cin>>columnB;


//     int matrix[rowA][columnA];
//     int matrix_a[rowB][columnB];

//     for(int i=0;i<rowA;i++){
//         for(int j=0;j<columnB;j++){
//             for(int k=0;k<columnB;k++){
                
//             }
//         }
//     }

//     return 0;
// }




// multiplication matrix  using  array

int main(){
    int row1,column1,row2,column2;

    cout<<"Note: column of first matrix should be equal to row of second matrix "<<endl;
    cout<<"---------------------------------------------------------"<<endl;

    cout<<"Enter the number of row in first martix: ";
    cin>>row1;

    cout<<"Enter the number of column in first marrix: ";
    cin>>column1;



    int matrix1[row1][column1];

    cout<<"Enter the numbers in first matrix: "<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cout<<"["<<i<<"]""["<<j<<"]: ";
            cin>>matrix1[i][j];
        }
    }
    cout<<"First martix"<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cout<<matrix1[i][j]<<" | ";
            
        }
        cout<<endl;
    }


    cout<<"Enter the number of row in second martix: ";
    cin>>row2;

    cout<<"Enter the number of column in second martix: ";
    cin>>column2;

    int matrix2[row2][column2];

    cout<<"Enter the numbers in second matrix: "<<endl;
    for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cout<<"["<<i<<"]""["<<j<<"]: ";
            cin>>matrix2[i][j];
        }
    }

    cout<<"second martix"<<endl;
    for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cout<<matrix2[i][j]<<" | ";
            
        }
        cout<<endl;
    }


    int final[row1][column2];
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < column2; j++){
            final[i][j]=0;
        }
    }
     
        
 
    

    
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < column2; j++){
            for(int k=0;k<column1; k++){
                final[i][j]+=matrix1[i][k]* matrix2[k][j];
                
            }
        }
        
    }

    cout<<"final matrix after multiplication"<<endl;
    
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < column2; j++){
            cout<<final[i][j]<<" | ";
        }
        cout<<endl;
        
    }
            
                
            

    return 0;
}
    
        
        
    
    


            

    
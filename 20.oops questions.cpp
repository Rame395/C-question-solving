#include <iostream>
#include <cmath>
using namespace std;




// class Bank{
//    private:
//       int balance;

//    public:

//      Bank(int balance){
//       this->balance=balance;

//      }
//      void withdraw(int amount){
//       balance-=amount;
//       cout<<"Balance after withdraw from B1: "<<balance<<"\n";
      
//    }
   
//    void deposite(int amount){
//       balance+=amount;
//       cout<<"Balance after deposite in B1:"<<balance<<"\n";

//      }
// };

// int main(){
//    Bank B1(0);
//    B1.deposite(100);
//    B1.withdraw(50);
   
   
   
// }



//concept of decleating function inside the class and define outside the class.

class cube{
   private:
      int length;
      int breadth;

   public:
       void setvalue(int l, int b){
         length=l;
         breadth=b;
      }
      int getvalue(){
         return length,breadth;
      }
      void perimeter_of_rectangle();  //only declaration of functions
      void Area_of_rectangel();
   };

   void cube::perimeter_of_rectangle(){
      int perimeter=2*(length+breadth);
      cout<<"The perimeter of rectangle: "<<perimeter<<endl;
   }

   void cube::Area_of_rectangel(){
      int Area=length*breadth;
      cout<<"The area of the rectangle: "<<Area<<endl;
   }

int main(){
      int len=5;
      int bre=6;
      cube C1;
      C1.setvalue(len,bre);
      C1.perimeter_of_rectangle();
      C1.Area_of_rectangel();

      return 0;
   }



//concept of inline function

// inline void display_Num(int num){
//    cout<<" function call: "<<num<<endl;
// }
// int main(){
//    display_Num(100);
//    display_Num(500);
//    display_Num(100);
   
//       return 0;
//    }

/*
Create a class named Box with 3 integer member variables l,w,h.
Then make a member function named volume to calculate volume of
the box. Assign the value of l as ‘10' that of w as ‘4’ and h as ‘2’
respectively by creating an object of the class Box.
*/

// class Box{
//    private:
//       int L;
//       int W;
//       int H;
   
//    public:
//       Box(int L,int W,int H){
//          this->L=L;
//          this->W=W;
//          this->H=H;
//       }

//       void Volume_of_Box(){
//          int volume=L*W*H;
//          cout<<"The volume of the box= "<<volume;
//       }
// };
// int main(){
//    Box B1(12,2,6);
//    B1.Volume_of_Box();
//    return 0;
// }



// chess board design

// int main(){
//    int chess[8][8];
//    for(int i=0;i<8;i++){
//       for(int j=0;j<8;j++){
//          if((i+j)%2==0){
//             cout<<"⬜";
//          }
//          else{
//             cout<<"⬛";
//          }
//       }
//       cout<<endl;
//    }
//    return 0;
// }



     
   





   
   






      





/*
1. Write a C++ program to implement a class called Circle that has private member variables for radius.
 Include member functions to calculate the circle's area and circumference.
*/


// class Circle{
//     private:
//           double radius;

//     public:
//         double pi=3.14;
    
//         void setradius(double r){
//                radius=r;
//           }
    
//         double getradius(){
//                 return radius;
//         }

//         double calcualteArea(){
//             return pi*radius*radius;
//         }

//         double calculateCircum(){
//             return 2*pi*radius;
//         }
//  };

//  int main(){
//      Circle c1;
//      c1.setradius(3);
 
//      cout<<"The area of the circle= "<<c1.calcualteArea()<<endl;
//      cout<<"The circumference of the circle= "<<c1.calculateCircum()<<endl;
     
//      return 0;
 
//  }







/*
2. Write a C++ program to create a class called Rectangle that has private member variables for length and width. 
Implement member functions to calculate the rectangle's area and perimeter.
*/

// class Rectangel{
//     private:
//        int length;
//        int width;

//     public:
//        Rectangel(int length,int width){
//         this->length=length;
//         this->width=width;
//       }

//       int calculateArea(){
//         return length*width;
//       }
//       int calculatePerimeter(){
//         return 2*(length+width);

//       }
// };


// int main(){
//     int L, W;
//     cout<<"Enter the length of the rectangel: ";
//     cin>>L;
//     cout<<"Enter the width of the rectangel: ";
//     cin>>W;
//     Rectangel R1(L,W);

//     cout<<"The area of the rectangel= "<<R1.calculateArea()<<endl;
//     cout<<"The Perimeter of the rectangel= "<<R1.calculatePerimeter()<<endl;
//     return 0;
// }










/*
3.Write a C++ program to create a class called Person that has private member variables for name, age and country.
 Implement member functions to set and get the values of these variables.
*/


// class Person{
//     private:
//          string name;
//          int age;
//          string country;

//     public:
//         void setperson( string n,int a,string c){
//             name=n;
//             age=a;
//             country=c;

//         }

//        void getperson(){
//         cout<<"Name= "<<name<<endl;
//         cout<<"Age= "<<age<<endl;
//         cout<<"Country= "<<country;

//        }
// };

// int main(){
//     Person P1;
//     P1.setperson("Ramesh",19,"Nepal");
//     P1.getperson();

    
//     return 0;
// }





/*
5. Write a C++ program to implement a class called BankAccount that has private member variables for account number 
 balance  . Include member functions to deposit and withdraw money from the account.
*/


// class BankAccount{
//     private:
//        int AccountNo;
//        double Balance;

//     public:
//        BankAccount(int accNo,double blnc){
//         AccountNo=accNo;
//         Balance=blnc;
//       }

//         void getInfo(){
//             cout<<"\t---------------------------------------\n";
//             cout<<"Account NO: "<<AccountNo<<endl;
//             cout<<"Total Balance $: "<<Balance<<endl;
//             cout<<"\t---------------------------------------\n";
//         }


//         void Deposite(double amount){
//             if(amount>0){
//                 Balance+=amount;
//                 cout<<"------------------------------------ \n  ";
//                 cout<<"Deposited successully!\n";
//                 cout<<"Deposited amount $: "<<amount<<endl;
//                 cout<<"New Balance $: "<<Balance<<endl;
//                 cout<<"------------------------------------ \n  ";
//             }

//             else{
//                 cout<<"Invalid Deposited amount! ";
//             }

//         }


//         void Withdraw(double amount){
//             if(Balance>=amount && amount>0){
//                 Balance-=amount;
//                 cout<<"------------------------------------ \n  ";
//                 cout<<"Withdrawn amount $: "<<amount<<endl;
//                 cout<<"Reaminging Balance $: "<<Balance<<endl;
//                 cout<<"Thank you! Have a good day!😊\n";
//                 cout<<"------------------------------------ \n  ";
//             }
//             else if(amount>Balance){
//                 cout<<"Insufficient amount! You only have $ "<<Balance<< " in your account! \n";
//             }
//             else{
//                 cout<<"Invalid withdrawl amount.\n";
//             }

//         }
//         int isValidAccount(int accNo){
//          return (accNo==AccountNo);
 
//         }
         
//  };
//  int main(){
//      int UserAccountNo;
//      int InitialBalance=0;
 
//      cout<<"Enter your Account No: ";
//      cin>>UserAccountNo;
 
//      BankAccount B(1234567890,InitialBalance);
 
//      if(B.isValidAccount(UserAccountNo)){
//          cout<<"Hi! Ramesh, Welcome to you account\n";
//          B.getInfo();
 
 
//          double DepositeAmount;
//          cout<<"Enter the amount you want to deposite: ";
//          cin>>DepositeAmount;
//          B.Deposite(DepositeAmount);
 
 
//          double WithdrawlAmount;
//          cout<<"Enter the amount you want to withdraw: ";
//          cin>>WithdrawlAmount;
//          B.Withdraw(WithdrawlAmount);
//      }
 
//      else{
//          cout<<"Invalid account no! ";
//      }
    
//  }






/*
6. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its 
   three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.
*/


// class Triangle{
//     private:
//         double Length1;
//         double Length2;
//         double Length3;


//         public:
//            Triangle(double len1,double len2,double len3){
//             Length1=len1;
//             Length2=len2;
//             Length3=len3;
//         }


//         void propertiesOfTriangle(){
//             if(Length1==Length2 && Length2==Length3){
//                 cout<<"The triangle is 'EQUILATERAL' triangle because all the side are equal.";
//             }

//             else if (Length1==Length2 || Length1==Length3 || Length2==Length3){
//                 cout<<"The triangle is 'ISOSCELES' triangle because only two side are equal. ";
//             }
            
//             else{
//                 cout<<"The triangle is 'SCALENE' triangle because all the side are different.";
//             }
//         }
// };
            
// int main(){
//     cout<<"If you want to check whether the triangel 📐 is EQUILATERAL , ISOSCELES or SCALENE then Enter the length of all the three side of triangle.\n";
//     cout<<"";

//     int l1,l2,l3;
//     cout<<"Enter the length of Side 'A'.: ";
//     cin>>l1;

//     cout<<"Enter the length of Side 'A'.: ";
//     cin>>l2;

//     cout<<"Enter the length of Side 'A'.: ";
//     cin>>l2;

//     Triangle length(l1,l2,l3);

//     length.propertiesOfTriangle();

//     return 0;
// }
            
            





/*
7. Write a C++ program to implement a class called Employee that has private member variables for name, employee ID,
   and salary. Include member functions to calculate and set salary based on employee performance.
*/

// class Employee{
//     private:
//          string name;
//          int empoyeeId;
//          double salary;

//     public:
//          Employee(string nam,double id,double sal){
//             name=nam;
//             empoyeeId=id;
//             salary=sal;
//         }

//         void salaryCalculation(double rating){
//             if(rating>=4.5){
//                 salary+=15000;
//             }
//             else if (rating>=4){
//                 salary+=10000;
//             }
//             else if (rating>=3.5){
//                 salary+=5000;
//             }
//             else if (rating>=2.8){
//                 salary+=2000;
//             }
//             else{
//                 salary;
//             }
//         }

//         void setSalary(double sal){
//             salary=sal;

//         }

//         double getSalary(){
//             return salary;
//         }
//     };

// int main(){
//         string emplName;
//         int empId;
//         double empSal;
    
//         cout<<"Enter the name of Employee: ";
//         cin>>emplName;
    
//         cout<<"Enter the ID of Employee: ";
//         cin>>empId;
    
//         cout<<"Enter the Employee salary $: ";
//         cin>>empSal;
    
//         Employee E1(emplName,empId,empSal);

    
//         cout<<"Initial salary of "<<empId<<" no: "<<E1.getSalary()<<endl;
    
    
//         double PerformanceaRting;
//         cout<<"Input perfromance rating of an employee(1-5): ";
//         cin>>PerformanceaRting;
    
//         E1.salaryCalculation(PerformanceaRting);
    
//         cout<<"Your updated salary: "<<E1.getSalary();
    
    
//         return 0;
//     }







/*
8. Write a C++ program to implement a class called Shape with virtual member functions for calculating area and 
perimeter. Derive classes such as Circle, Rectangle, and Triangle from the Shape class and override virtual functions
accordingly.
*/



// class Shape{
//    public:
//       virtual double AreaCalculation() const=0;

//       virtual double PerimeterCalculation() const=0;

// };

// class Circle:public Shape{
//    private:
//        double radius;
       

//    public:
//        const double PI=3.14;
//       Circle(double radius){
//          this->radius=radius;

//       }
//       double AreaCalculation() const override {
//          return PI*(radius*radius);
         
//       }
      
//       double PerimeterCalculation() const override{
//          return 2*PI*radius;
         
//       }

// };

// class Rectangle:public Shape{
//    private:
//        double length;
//        double breadth;

//    public: 
//        Rectangle(double length,double breadth){
//          this->length=length;
//          this->breadth=breadth;
//       }

//       double AreaCalculation() const override{
//          return length*breadth;
//       }

//       double PerimeterCalculation() const override{
//          return 2*(length+breadth);
//       }
// };

// class Triangle:public Shape{
//    private:
//       double sideA;
//       double sideB;
//       double sideC;

//    public:
//        Triangle(double sideA,double sideB,double sideC){
//          this->sideA=sideA;
//          this->sideB=sideB;
//          this->sideC=sideC;
//        }

//        double AreaCalculation() const override{
//          double s=(sideA+sideB+sideC)/2;
//          return sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));
        
//        }

//        double PerimeterCalculation() const override{
//          return sideA+sideB+sideC;
//        }
      


// };

// int main(){
//    double r;
//    cout<<"Enter the radius of circle: ";
//    cin>>r;
//    Circle C1(r);
//    cout<<"Circle"<<endl;
//    cout<<"The area of the circle: "<<C1.AreaCalculation()<<endl;
//    cout<<"The perimeter of the circle: "<<C1.PerimeterCalculation()<<endl;

//    cout<<"-----------------------------------------------------\n";
   
//    double l,b;
//    cout<<"Enter the length of the rectangle: ";
//    cin>>l;
//    cout<<"Enter the breadth of the rectangle: ";
//    cin>>b;
//    Rectangle R1(l,b);
//    cout<<"Rectangle"<<endl;
//    cout<<"The area of the rectangle: "<<R1.AreaCalculation()<<endl;
//    cout<<"The perimeter of the rectangle: "<<R1.PerimeterCalculation()<<endl;
   
//    cout<<"-----------------------------------------------------\n";

//    double A,B,C;
//    cout<<"Enter the lenght of A: ";
//    cin>>A;
//    cout<<"Enter the lenght of B: ";
//    cin>>B;
//    cout<<"Enter the lenght of C: ";
//    cin>>C;
//    Triangle T1(A,B,C);
//    cout<<"Triangle"<<endl;
//    cout<<"The area of the circle: "<<T1.AreaCalculation()<<endl;
//    cout<<"The perimeter of the circle: "<<T1.PerimeterCalculation()<<endl;
//    return 0;
// }
       

/*
The = 0 at the end of the function declaration makes it a pure virtual function.
 This means:The function must be implemented in derived classes (Circle, Rectangle, Triangle).
The Shape class becomes an abstract class (cannot be instantiated directly).


The const at the end of the function means:
This function does not modify any member variables of the class.


The override keyword ensures that:  The function correctly overrides a base class function.
 If you accidentally misspell the function name or change its parameters, the compiler will give an error.
*/










/*
9.Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both
 the above classes. Now, create a function in each of these classes which prints "I am mammal",
  "I am a marine animal" and "I belong to both the categories: Mammals as well as Marine Animals" respectively. 
  Now, create an object for each of the above class and try calling

1.Function of Mammals by the object of Mammal
2.Function of MarineAnimal by the object of MarineAnimal
3.Function of BlueWhale by the object of BlueWhale
4.Function of each of its parent by the object of BlueWhale

*/


// class Mammals{
// public:
//    virtual void callMammal()  {
//       cout<<"I am mammal"<<endl;
//    }
   
// };

// class MarineAnimal{
// public:
//      virtual void callMarine() {
//       cout<<"I am a marine animal"<<endl;
//      }
// };

// class BlueWhale:public Mammals, public MarineAnimal{
//    public:
//        void callBlue(){
//          cout<<"I belong to both the categories: Mammals as well as marine animals"<<endl;

//        }
       
//    };
//    int main(){
//       Mammals mammal;
//       mammal.callMammal();
      
      
//       MarineAnimal marine;
//       marine.callMarine();
   
//       BlueWhale Blue;
//       Blue.callBlue();

//       Blue.callMammal();

//       Blue.callMarine();
   
//       return 0;
//    }
       







/*
10.Make a class named Fruit with a data member to calculate the number of fruits in a basket.
Create two other classes named Apples and Mangoes to calculate the number of apples and mangoes in the basket. 
Print the number of fruits of each type and the total number of fruits in the basket.
*/

// class Fruit{
//    protected:
//        int totalFruits;

//    public:
//        void setTotalFruits(int count){
//          totalFruits=count;

//        }
//        int getTotalFruits(){
//          return totalFruits;
//        }
// };
       

// class Apples:public Fruit{
//    public:
//        Apples(int appleCount){
//          setTotalFruits(appleCount);

//        }
// };


// class Mangoes:public Fruit{
//    public:
//        Mangoes(int mangoesCount){
//          setTotalFruits(mangoesCount);

//        }

// };

// int main(){
//    int mangoes,apples;
//    cout<<"Enter  no of Mangoes in basket: ";
//    cin>>mangoes;

//    cout<<"Enter  no of Apples in basket: ";
//    cin>>apples;
    

//    Apples A1(apples);
//    Mangoes M1(mangoes);

//    int total_Fruits=A1.getTotalFruits()+M1.getTotalFruits();

//    cout<<" No of apples: "<<A1.getTotalFruits()<<endl;
//    cout<<" No of Mangoes in the basket: "<<M1.getTotalFruits()<<endl;
//    cout<<"Total no of Fruits in the basket: "<<total_Fruits<<endl;

//    return 0;
// }



      



/*
11.We want to calculate the total marks of each student of a class in Physics, Chemistry, and Mathematics 
and the average marks of the class. The number of students in the class is entered by the user.
Create a class named Marks with data members for roll number, name, and marks. Create three other classes inheriting
the Marks class, namely Physics, Chemistry, and Mathematics, which are used to define marks in the individual 
subject of each student.The roll number of each student will be generated automatically.

*/

// class Marks{
//   protected:
//     double marks;

//   public:
//       int rollNo;
//       string name;

//       void setMarks(int total_marks){
//         marks=total_marks;
//       }

//       int getmarks(){
//         return marks;
//       }

// };

// class Physics:public Marks{
//    public:
//       int physic;
//       void PhysMarks(){
//          setMarks(physic);
//       }
      
//    };
      
//    class Chemistry:public Marks{
//      public:
//          int chem;
//          void chemMarks(){
//             setMarks(chem);
//          }
         
   
//    };
//    class Mathematics:public Marks{
//      public:
//         int maths;
//         void chemMarks(){
//          setMarks(maths);
//       }
         
   
//    };
// int main(){
//      int student;
   
//      cout<<"Enter the number of students: ";
//      cin>>student;
   
//      Marks s[student];
//      Physics p[student];
//      Chemistry c[student];
//      Mathematics m[student];
     
   
//      for (int i = 0; i < student; i++){
//        cout<<"Enter rollno: ";
//        cin>>s[i].rollNo;
//        cout<<"Enter the name of the student: ";
//        cin>>s[i].name;
//        cout<<"Enter the marks in physics: ";
//        cin>>p[i].physic;
       
//        cout<<"Enter the marks in chemistry: ";
//        cin>>c[i].chem;
//        cout<<"Enter the marks in Mathematics: ";
//        cin>>m[i].maths;
//       }
//       cout<<endl;

//       for(int i=0;i<student;i++){
//          cout<<"Roll_no: "<<s[i].rollNo<<endl;
//          cout<<"Name: "<<s[i].name<<endl;
//          cout<<p[i].getmarks()+c[i].getmarks()+m[i].getmarks();
         

         
         
//       }

//   return 0;
// }

       

// class Marks {
//    protected:
//        int rollNo;
//        string name;
   
//    public:
//        static int rollCounter; 
//        Marks() {
//            rollNo = ++rollCounter;
//        }
   
//        void setName(string studentName) {
//            name = studentName;
//        }
   
//        int getRollNo() {
//            return rollNo;
//        }
   
//        string getName() {
//            return name;
//        }
//    };
   
//    // Initialize rollCounter
//    int Marks::rollCounter = 0;
   
//    class Physics : public Marks {
//    private:
//        double physicMarks;
   
//    public:
//        void setMarks(double marks) {
//            physicMarks = marks;
//        }
   
//        double getMarks() {
//            return physicMarks;
//        }
//    };
   
//    class Chemistry : public Marks {
//    private:
//        double chemMarks;
   
//    public:
//        void setMarks(double marks) {
//            chemMarks = marks;
//        }
   
//        double getMarks() {
//            return chemMarks;
//        }
//    };
   
//    class Mathematics : public Marks {
//    private:
//        double mathMarks;
   
//    public:
//        void setMarks(double marks) {
//            mathMarks = marks;
//        }
   
//        double getMarks() {
//            return mathMarks;
//        }
//    };
   
//    int main() {
//        int studentCount;
//        cout << "Enter the number of students: ";
//        cin >> studentCount;
   
       
//        Marks M[studentCount];
//        Physics p[studentCount];
//        Chemistry c[studentCount];
//        Mathematics m[studentCount];
   
//        double totalClassMarks = 0; 
//        for (int i = 0; i < studentCount; i++) {
//            string studentName;
//            double pMarks, cMarks, mMarks;
   
//            cout << "\nEnter name of student " << (i + 1) << ": ";
//            cin >> studentName;
           
           
//            p[i].setName(studentName);
//            c[i].setName(studentName);
//            m[i].setName(studentName);
   
//            cout << "Enter marks in Physics: ";
//            cin >> pMarks;
//            p[i].setMarks(pMarks);
   
//            cout << "Enter marks in Chemistry: ";
//            cin >> cMarks;
//            c[i].setMarks(cMarks);
   
//            cout << "Enter marks in Mathematics: ";
//            cin >> mMarks;
//            m[i].setMarks(mMarks);
   
//            totalClassMarks += (pMarks + cMarks + mMarks);
//        }
   
//        // Display student details
//        cout << "\nStudent Details and Total Marks:\n";
//        for (int i = 0; i < studentCount; i++) {
//            double totalMarks = p[i].getMarks() + c[i].getMarks() + m[i].getMarks();
//            cout << "\nRoll No: " << p[i].getRollNo();
//            cout << "\nName: " << p[i].getName();
//            cout << "\nTotal Marks: " << totalMarks << "\n";
//        }
   
//        // Calculate and display class average
//        double classAverage = totalClassMarks / (studentCount * 3);
//        cout << "\nClass Average Marks: " << classAverage << endl;
   
//        return 0;
//    }
       
      
      
   
   
// void Test(){
//    int y;
//    int x=1;
//    y=x++;
//    cout<<"X= "<<x<<endl;
//    cout<<"Y= "<<y<<endl;
// }

// int main(){
//    Test();
//    return 0;
// }

// void Test(){
//    int y;
//    static int x=1;
//    y=x++;
//    cout<<"X= "<<x<<endl;
//    cout<<"Y= "<<y<<endl;
// }

// int main(){
//    Test();
//    return 0;
// }


   









  






         




      
   
      









            
          
            







 




        




   


        



   
    

    
   

   
    


    















        




    
   


// 5. Create a base class Animal with an attribute name. Derive a class Dog that has an
// additional method bark.
#include <iostream>
using namespace std;
class Animal{
    public:
       string name;
    
        Animal(string name){
           this->name=name;}

};

class Dog:public Animal{
    public:
       Dog(string name):Animal(name){}


       void getdog(){
        cout<<"Name:"<<name<<"\n";
       }

       void bark(){
        cout<<"bark!"<<"\n";
       }


};

int main(){
    Dog D1("Tommy");
    D1.getdog();
    D1.bark();
   return 0;
}
    

    

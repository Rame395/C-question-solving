//4. Implement a class Student with private attributes name and age. Provide public
// methods to set and get these attributes.

#include <iostream>
using namespace std;

class Student{
    private:
       string name;
       int age;
    
    public:
       void setName(string name){
           this->name=name;
       }

       void setAge(int age){
        this->age=age;
      }

      string getName(){
        return name;
      }

      int getAge(){
        return age;
      }

};
int main(){
    Student S1;
    S1.setName("Ramesh");
    S1.setAge(19);
    cout<<S1.getName()<<"\n";
    cout<<S1.getAge()<<"\n";

    return 0;
}

    


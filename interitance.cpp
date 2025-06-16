#include<iostream>
using namespace std;

class Parent {
   public:

    string name;
    int age;
    int salary;
    Parent(){
      cout<<"I am a parent constructor"<<endl;
    }

   ~Parent(){
     cout<<"I am parent destructor";
   }

};

class Child : public Parent {
    public:
    

    Child(){
      cout<<"I am a child constructor"<<endl;
    }
    
    void getinfo(){
      cout<<"Name "<<name<<endl;
      cout<<"Age "<<age<<endl;
      cout<<"Salary "<<salary<<endl;
    }
      ~Child(){
        cout<<"I am a Child destructor";
      }

};


int main(){

  Child c1;
  c1.name = "Farhan";
  c1.age = 23;
  c1.salary = 2300;
  c1.getinfo();
  

  return 0;
}
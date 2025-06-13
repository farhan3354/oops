#include <iostream>
using namespace std;

 class Teacher {
 public:

 // unparameterized constructor

     Teacher() {
         dep = "Computer Science"; 
     }

     // parameterized constructor

     Teacher(string n, string d, int s, int a){
        name = n;
       age = a;
       dep = d;
       salary = s;
     }

 // Copy constructor

 Teacher(Teacher &obj){

   this->name = obj.name;
   this->age =obj.age;
   this->dep = obj.dep;
   this->salary = obj.salary;
   cout<<"copy constructor called"<<endl;
   cout<<endl;

 }

     string dep;
     string name;
     int salary;
     int age;


    void getinfo(){
       cout<<"name "<<name<<endl;
       cout<<"age "<<age<<endl;
       cout<<"salary "<<salary<<endl;
       cout<<"dep "<<dep<<endl;
       cout<<endl;
     }
 };


 int main() {

  Teacher t1("as","cs",2300,32);
   t1.getinfo();

   // copy constructor
   Teacher t2(t1);
   t2.getinfo();
  
  
      Teacher t2;
     t2.name = "Dr. Smith";
   t2.salary = 75000;
     t2.age = 45;

    

    Teacher t3;
      t3.name = "Dr. Williams";
      t3.salary = 70000;
      t3.age = 38;

      cout << "Teachers List:\n";
      cout << "1. " << t1.name << " (" << t1.dep << "), Salary: $" << t1.salary << endl;
      cout << "2. " << t2.name << " (" << t2.dep << "), Salary: $" << t2.salary << endl;
      cout << "3. " << t3.name << " (" << t3.dep << "), Salary: $" << t3.salary << endl;

  
 }
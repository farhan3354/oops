#include<iostream>
using namespace std;

// Hierarchical inheritance

//  class Person{
//     public:
//       string name; 
//       int age;
//  };
// class Student : public Person{
//       public:
//       int rollnum;
      
// };
// class Teacher : public Person{
//       public:
//       int salary;
//       string depm;  
//       void getinfo(){
//         cout<<"Name "<<name<<endl;
//         cout<<"Age "<<age<<endl;
//         cout<<"Salary "<<salary<<endl;
//         cout<<"Department "<<depm<<endl;
//       }
// };

class Person {
  public:
    string name;
    int age;
      
};

class Student : public Person{

  public:
    int rollnum;
    void getinfo(){
      cout<<"Name "<<name<<endl;
      cout<<"Age "<<age<<endl;
      cout<<"Roll number "<<rollnum<<endl;
    }

};


int main(){

  Student S1;
  S1.name = "Farhan";
  S1.age = 23;
  S1.rollnum = 123;
  S1.getinfo();
 
  // Teacher T1;
  // T1.name ="Farhan";
  // T1.age =12;
  // T1.salary = 2300;
  // T1.depm = "CSE";
  // T1.getinfo();
  

  return 0;
}

// #include<iostream>
// using namespace std;

//         // Multiple inheritance
//   class Student
// {
//     public:
//       string name; 
//       int age;
//       int subject;
//   };  

//     class Teacher
// {
//       public:
//         int salary;
//         string depm;

// };

//   class Graduate : public Student, public Teacher{
//         public:
//         void getinfo(){
//           cout<<"Name "<<name<<endl;
//           cout<<"Age "<<age<<endl;
//           cout<<"Subject "<<subject<<endl;
//           cout<<"Salary "<<salary<<endl;
//           cout<<"Department "<<depm<<endl;
          
//         }
//   };

// int main(){

    
//     Graduate S1;
//     S1.name = "Farhan";
//     S1.age = 23;
//     S1.subject = 5;
//     S1.salary = 2300;
//     S1.depm = "CSE";
//     S1.getinfo();
  
// }


    // Muti level inheritance
// #include<iostream>
// using namespace std;

// class Person{
//    public:
//       string name;
//       int age;
//       string depm;
// };
//  class Student:public Person{
//       public:
//       int rollnum;

//  };

// class Graduate :public Student{
//             public:
//               int cgpa;
//               void getinfo(){
//               cout<<"Name "<<name<<endl;
//               cout<<"Age "<<age<<endl;
//               cout<<"Department "<<depm<<endl;
//               cout<<"Roll number "<<rollnum<<endl;
              
//             }
//   };



// int main(){

//   Graduate S1;
//   S1.name = "Farhan";
//   S1.age = 23;
//   S1.depm = "CSE";
//   S1.rollnum = 123;
//   S1.cgpa = 3;
//   S1.getinfo();
  
//   return 0;
// }
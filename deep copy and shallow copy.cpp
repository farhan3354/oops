// #include<iostream>
// using namespace std;

// class Student{

//   public:

    
//       // Shallow copy

//     // string name;
//     // double *cgpaptr;

//     // Student(string name, double cgpa){
//     //   this->name = name;
//     //   cgpaptr = new double;
//     //   *cgpaptr = cgpa;

//     //   cout<<"constructor called"<<endl;
//     // }

//     // Student(Student &obj)  {
//     //   this->name =obj.name;
//     //   this->cgpaptr = obj.cgpaptr;
//     // }

//     // void getinfo(){
//     //   cout<<"name "<<name<<endl;
//     //   cout<<"cgpa "<<*cgpaptr<<endl;
//     // }

//     // Deep copy

//     string name;
//     double *cgpaptr;
    
//     Student (string name, double cgpa){
//        this->name = name;
//        this->cgpaptr = new double;
//         *cgpaptr = cgpa;
//     }

//     Student(Student &obj){
//       this->name = obj.name;
//       this->cgpaptr = new double;
//       cgpaptr = obj.cgpaptr;
      
//     }

//     void getinfo(){
//       cout<<"Name :"<<name;
//       cout<<" Ggpa "<<*cgpaptr;
//        cout<<endl;
//     }

//     // destructor
//     ~Student(){
//       cout<<"I am a destructor i can delet everything";
//       delete cgpaptr;
//     }

// };

// int main(){

//   Student S1("Farhan",2.5);
  
//   S1.getinfo();

//  // Student S2(S1);
//  //  S2.name = "Asif";
//  //  *(S2.cgpaptr) = 3.9;
//  //  S1.getinfo();
//  //  S2.getinfo();
  



  
//   // Student S1("Farhan", 3.2);
//   // // S1.getinfo();
//   // Student S2(S1);
//   // S1.getinfo();
//   // *(S2.cgpaptr) = 2.5;
//   // S1.getinfo();
  
//   return 0;
// }
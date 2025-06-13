 #include <iostream>
 using namespace std;


 class Student{
   public:
     string name;
     int salary;
     string dep;
     int age;

     void changedep(string newdep){
         dep = newdep;
     }

     void changename(string chaname){
         name = chaname;
     }

 };


 int main() {

   cout << "Hello World!\n"; 

   Student S1;
   S1.name = "Farhan";

   S1.changedep("CS IT");

   cout << S1.dep << endl; 
   cout << S1.name ;

   cout<< endl;
   
   //  Second options

  const int number = 3;

   Student S3[number];

   S3[0].name ="Asif";
   S3[1].name ="Farhan";
   S3[2].name ="Afnan";
   S3[0].age = 12;
   S3[1].age = 13;
   S3[2].age = 23;
   S3[0].salary = 2334;
   S3[1].salary = 2123;
   S3[2].salary = 4567;
   S3[0].dep = "CS";
   S3[1].dep = "PF";
   S3[2].dep ="BBA";

   for(int i =0; i<number; i++){

     cout<< i+1 << S3[i].name << " "<< S3[i].salary << " "<< S3[i].dep << " "<< S3[i].age <<endl;



   }

 }
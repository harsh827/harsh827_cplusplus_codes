/* A user defined type can be thrown as an exception. */

#include<iostream>
using namespace std;

class Student
{
   public:
         int id;
		 Student(int i){id=i;}
};

int main()
{
   int i;
   try
   {
      cout<<"Enter a student id"<<endl;
	  cin>>i;
	  if(i<1)
	     throw Student(i);
	  else
		 cout<<"The student id="<<i<<endl;
   }
   catch(Student s)
   {
      cout<<"Caught an invalid student id = "<<s.id<<endl;
   }

   cout<<"End"<<endl;

   return 0;
}

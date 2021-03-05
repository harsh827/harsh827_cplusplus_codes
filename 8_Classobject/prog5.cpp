#include<iostream>
using namespace std;

class Student
{
   private:
        int id;
		double marks;
   public:
	    void get(int i, double m);
		void display();
};

void Student::get(int i, double m)
{
   id=i;
   marks=m;
}

void Student::display()
{
   cout<<"ID of a student=B"<<id<<endl;
   cout<<"Marks of a student="<<marks<<endl;
}

int main()
{
   Student s;
   int stud_id;
   s.get(118018,96);
   s.display();
   return 0;
}

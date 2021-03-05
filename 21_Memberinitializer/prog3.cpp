/* Initializing an object which is a member of another class */
#include<iostream>
using namespace std;

class A
{
   public:
       int y;
	   A(int b){y=b;}
};

class Point
{
   A a;

   public:
        Point():a(10){}
		void show(){cout<<"y="<<a.y<<endl;}
};

int main()
{
   Point p;
   p.show();
   return 0;
}

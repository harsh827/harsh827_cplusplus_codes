/* pointers to objects */
#include<iostream>
using namespace std;

class A
{
   public:
         int x;
		 void show(){x=100;cout<<"x="<<x<<endl;}
};

int main()
{
   A ob, *ptr;
   ptr=&ob;
   //ptr->x=100;
   //cout<<"x="<<ptr->x<<endl;
   ptr->show(); // (*ptr).show();
   return 0;
}
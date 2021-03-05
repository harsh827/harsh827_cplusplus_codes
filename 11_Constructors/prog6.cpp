#include<iostream>
using namespace std;

class Figure
{
   double l,b;
   public:
        A(double s);
		A(double x,double y);
		double area();
};

Figure::A(double s)
{
   l=s;
   cout<<"Area of the square="<<l*l<<endl;
}

Figure::A(double x,double y)
{
   l=x;
   b=y;
   cout<<"Area of the rectangle="<<l*b<<endl;
}


int main()
{
   A square(2.5), rectangle(1.5,3.5);
   return 0;
}

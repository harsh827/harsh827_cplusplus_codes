/* Pointer to a function */

#include<iostream>
using namespace std;

int f(int a,int b){return a+b;};

int main()
{
   int (*fp)(int,int)=f;
   cout<<"Sum = "<<(*fp)(10,20)<<endl;
   return 0;
}

#include<iostream>
using namespace std;
int main()
{
   int x=10;
   int *p=&x;
   x++;
   cout<<*p<<endl;
   return 0;
}

/* An exception can be re-thrown. */

#include<iostream>
using namespace std;
void f()
{
   cout<<"Inside a user defined function"<<endl;
   try
   {
	   cout<<"Inside try block in user defined function"<<endl;
   	   throw "Hello";
   }
   catch(const char *cp)
   {
	   cout<<"caught an exception = "<<cp<<endl;
	   throw;
   }
}
int main()
{
   cout<<"Entry"<<endl;
   try
   {
     f();
   }
   catch(const char *ccp)
   {cout<<"Caught the re-thrown exception = "<<ccp<<endl;}

   cout<<"End"<<endl;

   return 0;
}

#include<iostream>
using namespace std;
class Test
{
   private:
      int count=5;
   public:
       void operator ++() 
       { 
       count = count+1; 
       }
       void Display() 
	   {
	   cout<<"Count: "<<count;
	   }
};
int main()
{
    Test t;
    // this calls "function void operator ++()" function   
    ++t;
    t.Display();
    return 0;
}

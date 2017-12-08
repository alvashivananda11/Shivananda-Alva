#include<iostream>
using namespace std;
class operation
{
public:
    int a,b,c;
    float p,q,r;
   void compare(int x,int y)
   {
int c;
   a=x;
   b=y;
   c=a+b;
   cout<<"Answer:"<<c<<endl;
   }
void compare(double l,double m)
   {
       float r;
       p=l;
       q=m;
       r=p+q;
       cout<<"Answer:"<<r;
   }

};
int main()
{
operation obj;
obj.compare(1,2);
obj.compare(1.1,2.1);
    return 0;
}

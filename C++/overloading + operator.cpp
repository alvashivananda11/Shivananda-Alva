#include<iostream>
using namespace std;
class test
{
public:
int a,b,c;
void getdata(int x,int y,int z);
void operator +();
void disp();
};
void test::getdata(int x,int y,int z)
{
a=x;
b=y;
c=z;
}
void test::operator+()
{
a=+a;
b=+b;
c=+c;
}
void test::disp()
{
cout<<"Value of a:"<<a<<endl;
cout<<"Value of b:"<<b<<endl;
cout<<"Value of c:"<<c<<endl;
}
int main()
{
test obj;
obj.getdata(-10,20,83);
obj.operator+();
obj.disp();
return 0;
}

#include<iostream>
using namespace std;
int a=10,b=5,c;
class test
{
public:
test()
{
c=a+b;
cout<<"Constructor:"<<c<<endl;
}
~test()
{
c=a-b;
cout<<"Destructor:"<<c<<endl;
}
};
int main()
{
test obj;

return 0;
}

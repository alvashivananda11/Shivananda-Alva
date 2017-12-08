#include<iostream>
using namespace std;
class calculate{
public:
int a,b,c;
void add();
void sub();
void mul();
void div();
};
void calculate::add()
{
cout<<"Enter the number:";
cin>>a>>b;
c=a+b;
cout<<"Addition="<<c<<endl;
}
void calculate::sub()
{
cout<<"Enter the number:";
cin>>a>>b;
c=a-b;
cout<<"Subtraction="<<c<<endl;
}
void calculate::mul()
{
cout<<"Enter the number:";
cin>>a>>b;
c=a*b;
cout<<"Multiplication="<<c<<endl;
}
void calculate::div()
{
cout<<"Enter the number:";
cin>>a>>b;
c=a/b;
cout<<"Division="<<c<<endl;
}
int main()
{
    calculate cal;
    cal.add();
    cal.sub();
    cal.mul();
    cal.div();
return 0;
}

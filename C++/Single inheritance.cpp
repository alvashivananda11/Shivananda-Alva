#include<iostream>
using namespace std;
class A
{
public:
int b;
int a;
~A()
{
cout<<"gsdyfhguysgdfuyhgsahygfkuyhsghyadf:"<<endl;
cin>>a;
cin>>b;
}
void  show_ab();
};
class B:public A
{
public:
int c;
int d;
int e;
int f;
int add(void);
int sub(void);
int mul(void);
int div(void);
void display_c(void);
};;

void A::show_ab()
{
cout<<"The value of a is " <<a<<endl;
cout<<"asasasd " <<b<<endl;
}
int B::add()
{;
    c=a+b;
}
int B::sub()
{
    d=a-b;
}
int B::mul()
{
    e=a*b;
}
int B::div()
{
    f=a/b;
}
void B::display_c()
{

    cout<<"Addition:"<<c<<endl;
     cout<<"Subtraction:"<<d<<endl;
      cout<<"Multiplication:"<<e<<endl;
       cout<<"Division:"<<f<<endl;
}
int main()
{

    B g;
   
    g.show_ab();
    g.add();
    g.sub();
    g.mul();
    g.div();
    g.display_c();
    return 0;
}

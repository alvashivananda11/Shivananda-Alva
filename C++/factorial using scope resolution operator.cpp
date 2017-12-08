#include<iostream>
using namespace std;
class factorial{
int n,i,fact;
public:
void display();
void f();
};
void factorial::f()
{
fact=1;
cout<<"Enter a integer:";
cin>>n;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
}
void factorial::display(){
cout<<fact;
}
int main()
{
factorial shivu;
shivu.f();
shivu.display();
return 0;
}

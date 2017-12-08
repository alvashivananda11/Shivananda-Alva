#include<iostream>
using namespace std;
class factorial{
private:
int n,i,fact=1;
public:
void display(){
cout<<"Enter the integer:";
cin>>n;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
cout<<fact;
}
};
int main()
{
factorial shivu;
shivu.display();
return 0;
}

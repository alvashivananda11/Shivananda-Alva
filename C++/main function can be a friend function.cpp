#include<iostream>
using namespace std;
class myClass
{
friend int main();
void Hello()
{
cout<<("Hello Ram\n");
}
};
int main()
{
myClass m;
m.Hello();
return 0;
}

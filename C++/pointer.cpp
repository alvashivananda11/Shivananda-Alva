#include<iostream>
using namespace std;
int main()
{
int a=15;
int b=a;
cout<<"Address:"<<&b<<endl;
cout<<"Value stored at address:"<<*(&b);
return 0;
}

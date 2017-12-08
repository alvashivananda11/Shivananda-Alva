#include<iostream>
using namespace std;
int main()
{
string username;
int password;
cin>>username;
cin>>password;
try
{
if(username=="admin" && password==12345)
{
throw exception();
}
else
{
cout<<"Access denied";
}
}
catch(exception & e)
{
cout<<"Access granted";
}
return 0;
}

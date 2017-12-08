#include<iostream>
using namespace std;
int main()
{
	float a=25,b=0,c;

	try
	{
	c=a/b;
	cout<<"Result:"<<c;
}
catch (char i)
{
cout<<i;
}
return 0;
}

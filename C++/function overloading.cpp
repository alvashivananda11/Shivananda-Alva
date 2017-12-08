#include <iostream>
using namespace std;
class abc
{
    public:
int c; 
int print(int i)
{
	cout<<"area of square: ";
c=i*i;
cout<<c;
}
int print(int b,int h)
{
	cout<<endl<<"area of triangle: ";
	c=b*h/2;
	cout<<c;
}
};


int main()
{
abc z;
z.print(10);
z.print(10,7);
return 0;
}


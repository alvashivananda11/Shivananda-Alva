#include<iostream>
using namespace std;
class pattern
{
public:
int i,j;
public:
void sa()
{
for(i=5;i>=1;i--)
{	
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<endl;
} 
}
};
int main()
{
pattern a;
a.sa();
return 0;
}

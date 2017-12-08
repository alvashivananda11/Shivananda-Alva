#include<iostream>
using namespace std;
class pattern
{
public:
int i,j,number=1;
void sa()
{
for(i=1;i<=4;i++)
{	
for(j=1;j<=i;j++)
{
cout<<number;
number++;
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

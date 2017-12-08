#include<iostream>
using namespace std;
class pattern
{
public:
int i,j,k=1;
 pattern()
{
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
cout<<k;
k=k+1;
}
cout<<endl;
}
}
};
int main()
{
pattern object;
return 0;
}

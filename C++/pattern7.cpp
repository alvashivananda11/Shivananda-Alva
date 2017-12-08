#include<iostream>
using namespace std;
int main()
{
int i,j,k,z=5;
{
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=z;j++)
        {
            cout<<" ";
        }
        z=z-1;
        for(k=1;k<=i;k++)
        {
            cout<<k;
        }
       cout<<"\n";
    }
    return 0;
}
}


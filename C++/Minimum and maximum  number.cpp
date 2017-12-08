#include <iostream>
using namespace std;
int main()
{
int arr[5],i,max,min;
cout<<"Enter 5 numbers:\n";
for(i=0;i<=4;i++)
{
cin>>arr[i];
}
max=arr[0];
min=arr[0];
for(i=0;i<=4;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
if(arr[i]<min)
{
min=arr[i];
}
}
cout<<"Maximum number="<<max<<endl;
cout<<"Minimum number="<<min;
}

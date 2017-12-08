#include <iostream>
using namespace std;
int main()
{
int arr[5],i,sum=0;
cout<<"Enter 5 numbers:\n";
for(i=0;i<=4;i++)
{
cin>>arr[i];
sum=sum+arr[i];
}
cout<<"Sum="<<sum;
return 0;
}

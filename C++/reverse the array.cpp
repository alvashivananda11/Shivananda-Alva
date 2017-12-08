#include <iostream>
using namespace std;
main()
{
int arr[5],i;
cout<<"Enter 5 numbers:\n";
for(i=0;i<5;i++)
{
cin>>arr[i];
}
for(i=4;i>=0;i--)
{
cout<<arr[i];
}
return 0;
}

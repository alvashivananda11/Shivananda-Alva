#include <iostream>
using namespace std;
int main()
{
int arr[5]={1,2,3,4,5};
int *p;
int sum=0;
p=arr;
cout<<"Element in the String:"<<endl;
for(int i=0;i<5;i++)
{
cout<<*p;
sum = sum+*p;
p++;
}
cout<<endl<<"Total is "<<sum;
return 0;
}

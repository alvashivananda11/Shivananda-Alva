#include<iostream>
using namespace std;
int main(){
int arr[100],i,j,size;
cout<<"Enter number of elements : ";
cin>>size;
cout<<"Enter values : \n";
for(i=0;i<size;i++){
cin>>arr[i];
}
for(i=0;i<size;i++)
{
    for(j=i+1;j<size;j++)
    {
    if(arr[i]==arr[j])
    {
     cout<<"\n\nDuplicates : "<<arr[j]<<"\n\n";

        }
}
}
return 0;
}

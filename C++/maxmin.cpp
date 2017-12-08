#include<iostream>
using namespace std;
int main()
{
    int arr[5],ma,mi,i;
    cout<<"Enter Values\n";
    for(i=0;i<5;i++)
    {
    cin>>arr[i];
    }
    ma=arr[0];
    for(i=0;i<5;i++)
        {
       if(arr[i]>ma)
       {
           ma=arr[i];
       }
    }
    cout<<"\n\nmax : "<<ma;
    for(i=0;i<5;i++)
        {
       if(arr[i]<mi)
       {
           mi=arr[i];
       }
    }
    cout<<"\n\nmin : "<<mi<<"\n\n";
return 0;
}

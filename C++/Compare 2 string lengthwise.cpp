#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a[100];
char b[100];
cout<<"Enter the word in string1:";
cin>>a;
cout<<"Length="<<strlen(a)<<endl;
cout<<"Enter the word in string2:";
cin>>b;
cout<<"Length="<<strlen(b)<<endl;
if(strlen(a)==strlen(b))
{
    cout<<"String is equal";
}
else
{
    cout<<"String is not equal";
}
return 0;
}

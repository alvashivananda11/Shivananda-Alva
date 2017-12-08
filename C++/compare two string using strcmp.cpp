#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int i;
char first[25],second[25];
cout<<"Enter the first string:";
cin>>first;
cout<<"enter the second string:";
cin>>second;
i=strcmp(first,second);
cout<<"1 means not equal,0 means equal, -1 means less character"<<endl<<"Answer="<<i;
return 0;
}

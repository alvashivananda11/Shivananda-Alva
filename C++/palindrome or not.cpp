#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char one[100];
	char two[100];
	int i;
	cin>>one;
	strcpy(two,one);
	strrev(two);
	if(strcmp(one,two)==0)
	{
	cout<<"It is palindrome";
	}
	else
	{
	cout<<"It is not a palindrome";
	}
	return 0;
}

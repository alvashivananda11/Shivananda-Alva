#include<iostream>
using namespace std;
int main()
{
int a,sum, first=0,second=1;
cout<<"Enter the number:";
cin>>a;
	cout<<first<<endl<<endl<<second<<endl;
for(int i=0;i<=a;++i)
{

	sum=first+second;
	first=second;
	second=sum;
	cout<<endl<<sum<<endl;
}

return 0;
}


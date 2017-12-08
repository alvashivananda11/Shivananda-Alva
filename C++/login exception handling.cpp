#include<iostream>
using namespace std;
int main()
{
	int pass;
	string usr;
	cout<<"enter user name and password"<<endl;
	cin>>usr>>pass;
	try
	{	
		if(usr == "admin" && pass == 12345)
		{
			
			cout<<"access granted";
		
		}
		else
		{
			throw "invalid login";	
		}
	}

	catch(int e)
	{
	cout<<e;
	}	
	return 0;
	}

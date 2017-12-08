#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int k=1;
	for(int i=5;i>=1;i--)
	{
	for(int j=1;j<=5;j++)
		{
				if(j<=i)	
				{
					cout<<" ";
				}
				else
				{
				
		     	cout<<setw(3)<<k;
		     		k=k+1;
		     }
			
		}
		cout<<endl;		
	}
	return 0;
}

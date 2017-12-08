#include<iostream>
using namespace std;
inline max(int x,int y,int z)
{
return (x>y)?x:(y>z)?y:(x>z)?x:z;
}
int main()
{
int a,b,c;
cout<<"Enter any three no."<<endl;
cin>>a>>b>>c;
cout<<"Greater no is:"<<max(a,b,c);
return 0;
}

#include<iostream>
using namespace std;
inline int max(int x,int y,int z)
{
return(x>y)?x:(y>z)?y:(x>z)?:z;
}
int main()
{
    int a,b,c;
    cout<<"Enter the no."<<endl;
    cin>>a>>b>>c;
    cout<<"Greater no:"<<max(a,b,c);
    return 0;
}

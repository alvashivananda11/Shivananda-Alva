#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the itemcode:";
    cin>>a;
    cout<<"enter the cost:";
    cin>>b;
    ofstream os("items.txt");
   os << a << endl;
    os << b << endl;
  cout<<"DONE";

return 0;
}

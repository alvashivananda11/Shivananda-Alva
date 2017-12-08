#include <iostream>
using namespace std;
main()
{
int z,a,b,c;
cout<<"Press 1 for addition \n"
"Press 2 for Subtraction \n"
"Press 3 for Multiplication \n" "Press 4 for Division"<<endl;
cin>>z;
switch(z)
{
case 1:
cout<<"Enter the two number to add \n";
cin >> a >> b;
c=a+b;
cout<<"Answer:"<<c;
break;
case 2:
cout<<"Enter the two number to subtract \n";
cin >> a >> b;
c=a-b;
cout<<"Answer:"<<c;
break;
case 3:
cout<<"Enter the two number to multiplication \n";
cin >> a >> b;
c=a*b;
cout<<"Answer:"<<c;
break;
case 4:
cout<<"Enter the two number to division \n";
cin >> a >> b;
c=a/b;
cout<<"Answer:"<<c;
break;
default:
cout<<"Sorry you pressed the wrong button";
}
return 0;
}


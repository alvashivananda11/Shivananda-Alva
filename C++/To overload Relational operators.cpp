//Relational Operators are < , >  and ==
#include<iostream>
using namespace std;
class A
{
    int data;
public:
    A(int myData):data(myData){}
    //overload < , return non zero or zero
    int operator < (A ob){
    if(data < ob.data)
    {
        return 1;
    }
    else
        return 0;
}
//overload for >
 int operator > (A ob){
    if(data > ob.data)
    {
        return 1;
    }
    else
        return 0;
 }
        //overload for ==
        int operator == (A ob){
    if(data == ob.data)
    {
        return 1;
    }
    else
        return 0;
        }
};
int main()
{
    A ob1(15), ob2(15);
    if(ob1 < ob2) //ob1.operator< (ob2)
   {
       cout<<"ob1 < ob2"<<endl;
   }
   else if(ob1 > ob2) //ob1.operator > (ob2)
   {
       cout<<" ob1 > ob2 "<<endl;
   }
   else if(ob1 == ob2) //ob1.operator == (ob2)
   {
       cout<<"ob1 == ob2"<<endl;
   }
    return 0;
}

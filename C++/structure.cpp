#include<iostream>
using namespace std;
struct student{
char name;
int rollno;
float weight;
int age;
char gender;
};
int main()
{
student a;
student b;
student c;
a.name='a';
a.rollno=2;
a.weight=45.8;
a.age=18;
a.gender='M';
cout<<a.name<<endl<<a.rollno<<endl<<a.weight<<endl<<a.age<<endl<<a.gender<<endl;
return 0;
}

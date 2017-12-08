#include<iostream>
using namespace std;
class student{
public:
char name[10];
int rollno;
int i;
void stdname();
void stdrollno();
void displayname();
void displayrn();
};
void student::stdname()
{
cout<<"enter the name"<<endl;
for(i=1;i<=10;i++)
{
cin>>name[i];
}
}
void student::stdrollno()
{
cout<<"enter rollno"<<endl;
for(i=1;i<=10;i++)
{
cin>>rollno;
}
}
void student::displayname()
{
for(i=1;i<=10;i++)
{
cout<<"output="<<name[i]<<endl;
}
}
void student::displayrn()
{
for(i=1;i<=10;i++)
{
cout<<"output="<<rollno<<endl;
}
}
int main()
{
student stud;
stud.stdname();
stud.stdrollno();
stud.displayname();
stud.displayrn();
return 0;
}

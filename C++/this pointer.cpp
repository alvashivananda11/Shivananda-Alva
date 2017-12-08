#include <iostream>
using namespace std;
class Employee {
public:
int serialno;
string name;
float salary;
Employee(int serialno, string name, float salary)
{
this->serialno= serialno;
this->name = name;
this->salary = salary;
}
void display()
{
cout<<serialno<<"  "<<name<<"  "<<salary<<endl;
}
};
int main(void) {
Employee e1=Employee(1, "Akshay", 8000); //creating an object of Employee
Employee e2=Employee(2, "Raj", 5000); //creating an object of Employee
Employee e3=Employee(3, "sam", 5000); //creating an object of Employee
Employee e4=Employee(4, "Ram", 5000); //creating an object of Employee
Employee e5=Employee(5, "shiv", 5000); //creating an object of Employee
e1.display();
e2.display();
e3.display();
e4.display();
e5.display();
return 0;
}

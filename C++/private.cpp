#include<iostream>
using namespace std;
class shivananda{
private:
int age;
int lessage(){
return age-5;
}
public:
void setage(int value)
{
age=value;
}
void displayage()
{
cout<<lessage()<<endl;
}
};
int main()
{
shivananda shivu;
shivu.setage(18);
shivu.displayage();
return 0;
}

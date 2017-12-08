#include <iostream>
#include <fstream>
using namespace std;
int main()
{
 char line[100];
 ifstream is("file1.txt");
 ofstream os("file2.txt");
 if (is.is_open())
 {
  while (!is.eof())
    {
   is.getline(line,100);
   os << line << endl;
  }
  cout<<"DONE";
 }
 else
    {
  cout << "Try again." << endl;
 }
 return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int countcorrect=0, countincorrect=0, tot=0;
string category;
char book[8],movie[8],guess[8],input;
cout<<"Enter the category:Movie/Book\n";
cin>>category;
if(category=="book")
{
cin>>book[8];
for(int i=0;i<8;i++)
{
guess[i]='*';
}
cout<<"Input Values: ";
for(int i=0;i<8;i++)
{
cout<<guess[i];
}
cout<<"\n";
cout<<"Enter total number of characters:8\n";
cout<<"Total number of guesses you can make:10 \n";
for(int i=0;i<10;i++)
{
cout<<"enter char\n";
cin>>input;
for(int i=0;i<8;i++)
{
if(input==book[i])
{
tot++;
guess[i]=input;
}
}
if(tot!=0)
{
countcorrect++;
tot=0;
}
else{
    countincorrect++;
}
cout<<"Input Values:";
for(int i=0;i<8;i++)
{

cout<<guess[i];
}
cout<<"\n";
cout<<"Total number of correct attempts:"<<countcorrect<<"\n";
cout<<"Total number of incorrect attempts:"<<countincorrect<<"\n";
if(countcorrect==7)
{
    cout<<"You got it";
    break;
}
}
}
if(category=="movie")
{
cin>>movie[8];
for(int i=0;i<9;i++)
{
guess[i]='*';
}
cout<<"Input Values: ";
for(int i=0;i<9;i++)
{
cout<<guess[i];
}
cout<<"\n";
cout<<"Enter total number of characters:9\n";
cout<<"Total number of guesses you can make:10 \n";
for(int i=0;i<10;i++)
{
cout<<"enter char\n";
cin>>input;
for(int i=0;i<9;i++)
{
if(input==movie[i])
{
tot++;
guess[i]=input;
}
}
if(tot!=0)
{
countcorrect++;
tot=0;
}
else{
    countincorrect++;
}
cout<<"Input Values:";
for(int i=0;i<9;i++)
{
    cout<<guess[i];
}
cout<<"\n";
cout<<"Total number of correct attempts:"<<countcorrect<<"\n";
cout<<"Total number of incorrect attempts:"<<countincorrect<<"\n";
if(countcorrect==7)
{
    cout<<"You got it";
    break;
}
}
}
return 0;
}

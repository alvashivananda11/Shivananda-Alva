#include<stdio.h>
#include<string.h>
int main()
{
char string[100];
printf("enter the string:");
gets(string);
strupr(string);
printf("string after strupr: %s",string);
return 0;
}

#include <stdio.h>
int main()
{
int i,j,a,b;
for(i=1;i<=3;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
for(a=1;a<=2;a++)
{
for(b=2;b>=a;b--)
{
printf("*");
}
printf("\n");
}
return 0;
}

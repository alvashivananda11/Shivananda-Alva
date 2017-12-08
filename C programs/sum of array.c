#include<stdio.h>
#include<conio.h>
int main()
{
int a[25],i,n,sum=0;
printf("how many elements");
scanf("%d",&n);
printf("enter the arrays");
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
sum=sum+a[i];
}
printf("sum=%d",sum);
return 0;
}

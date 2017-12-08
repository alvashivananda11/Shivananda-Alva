#include<stdio.h>
#include<string.h>
main()
{
char arr[]="programmer";
int len1,len2;
len1=strlen(arr);
len2=strlen("c programming");
printf("\n I am a %s len=%d",arr,len1);
printf("\n I am doing %s len=%d","c programming",len2);
return 0;
}

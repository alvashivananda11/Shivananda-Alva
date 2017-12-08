#include<stdio.h>

int main()
{
    int i, j, k,num;
    printf("enter the no. of lines you want");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=i;j<num;j++)
        {
            printf(" ");
        }
        for(k=1;k<(i*2);k++)
        {
                printf("*");
        }
        printf("\n");
    }
    for(i=num;i>=1;i--)
    {
        for(j=num;j>i;j--)
        {
                printf(" ");
        }
        for(k=1;k<(i*2);k++)
        {
                printf("*");
        }
        printf("\n");
    }
    return 0;
    }

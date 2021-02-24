
#include<stdio.h>
int main()
{
    for(int i=1;i<=5; i++)
    {
        for(int j=4; j>=i; j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
           printf("%d",k);
           //printf("*");
        }
        for(int m=i-1; m>=1; m--)
        {
           printf("%d",m);
           //printf("*");
        }
        printf("\n");
    }
}

#include<stdio.h>
int main()
{
    for(int i=5; i>=1;i--)
    {
        for(int k=0; k<5-i;k++)
            printf(" ");
        for(int j=i; j<=2*i-1; j++)
            printf("%d",i);
        for(int j=0; j<i-1; j++)
            printf("%d",i);
        printf("\n");

    }

}


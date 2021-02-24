#include<stdio.h>
int main()
{ int k;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<i; j++)
        {
            printf(" ");
        }
        for(k=i; k<=5;k++)
        {
            printf("*");
        }
        k--;
        printf("\n");
    }
}

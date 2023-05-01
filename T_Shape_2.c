#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        // space
        for(int j=n-i; j>=1; j--)
        {
            printf(" ");
        }

        // star
        for(int j =1; j<=2*i -1; j++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}
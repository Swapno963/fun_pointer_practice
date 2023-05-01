#include<stdio.h>
int main()
{
    int n,spc,str;
    scanf("%d",&n);
    spc = n-1;
    str = 1;

    for(int row =1; row <= 2*n; row ++)
    {
        // space
        for(int j=1; j<=spc; j++)
        {
            printf(" ");
        }
        // star
        for(int j=1; j<=str; j++){
            printf("*");
        }
        printf("\n");

        if(row < n){
            spc--;
            str+=2;
        }
        else if(row == n){
            //str+=2;
        }
        else{
            spc++;
            str-=2;
        }
    }

    return 0;
}
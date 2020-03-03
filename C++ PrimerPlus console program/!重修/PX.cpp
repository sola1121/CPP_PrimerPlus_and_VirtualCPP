#include<stdio.h>
int main()
{
    int a[7] = {1,3,6,8,6,3,1};
    int b[7] = {3,2,1,0,1,2,3};
    int i,j,k;
    for(k=0;k<7;k++){
        for(j = 0;j<b[k];j++)
            printf(" ");
        for(i = 0;i<a[k];i++)
            printf("*");
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);

    int ar[r][c],br[r][c],sum[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&ar[i][j]);//taking input of matrces 1
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&br[i][j]);//taking input of matrces 2
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum[i][j]=ar[i][j]*br[i][j];//multiply of matrces 1
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",sum[i][j]);//print the  matrces 1
        }
        printf("\n");
    }
    return 0;
}

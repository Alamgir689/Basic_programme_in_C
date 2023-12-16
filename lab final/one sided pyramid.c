#include<stdio.h>
int main()
{

int n,k;
scanf("%d",&n);//for how many time loop will occur
k=1;
for(int i=0;i<n;i++)
{
    for(int j=0;j<k;j++)//for how many digit wants to print
    {
        printf("%c",'A'+i);
    }
    k++;
    printf("\n");
}

return 0;
}

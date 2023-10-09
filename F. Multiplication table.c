/*
Given a number N. Print the maltiplication table of the number from 1 to 12

For example: if N = 1


*/
#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
for(i=1;i<=12;i++)
{
    printf("%d * %d =%d\n",n,i,n*i);
}


return 0;
}

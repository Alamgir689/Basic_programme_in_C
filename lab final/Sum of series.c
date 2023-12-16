
#include <stdio.h>
int main()
{
int n,sum=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    sum=sum+(i*i)*  ( (i+1)   *  (i+1) );
}
printf("%d",sum);
}

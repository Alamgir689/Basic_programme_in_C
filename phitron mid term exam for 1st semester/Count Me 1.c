/*

*/
#include<stdio.h>
int main()
{
int n,i,c=0,p=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for (i=0;i<n;i++)
    {

    if(a[i]%2 == 0)
    {

    c++;

    }


    if(a[i]%3 == 0)
    {
        p++;

    }
    if(a[i]%2==0 && a[i]%3 == 0)
    {
        p--;

    }
}
printf("%d %d ",c,p);

return 0;
}

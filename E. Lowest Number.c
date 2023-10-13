/*

*/
#include<stdio.h>
#include<limits.h>
int main()
{
int i,n;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int mn=INT_MAX,pos;
for(i=0;i<n;i++)
    {
        if(arr[i] < mn)
           {

           mn=arr[i];
        pos=i+1;
        }
    }
    printf("%d %d",mn,pos);

return 0;
}

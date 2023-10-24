/*

*/
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int pos=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=0)
            {
                sum=sum+arr[i];
            }
            else if(arr[i]<0)
            {
                pos=pos+arr[i];
            }
    }
printf("%d %d",sum,pos);

return 0;
}

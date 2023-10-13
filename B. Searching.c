/*

*/
#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int x;
scanf("%d",&x);
int sum=-1;
for(int i=0;i<n;i++)
{
    if(arr[i]==x)
    {
    sum=i;
   break;
    }

}
printf("%d\n",sum);

return 0;
}

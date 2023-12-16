#include<stdio.h>
void fun(int arr[],int x)
{int i,m=arr[0];
    for(i=0;i<x;i++)
    {
        if(m<arr[i])
        {
            m=arr[i];
        }

    }

 printf("largest num is %d",m);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    fun(arr,n);
    return 0;
}

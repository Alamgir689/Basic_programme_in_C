/*

*/
#include<stdio.h>
int main()
{
    int i,n,a;
    int neg=0,pos=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0){
            arr[i]=i*0+2;
        }
            else if(arr[i]>0)

                {
                arr[i]=i*0+1;
                }
            printf("%d ",arr[i]);
    }



return 0;
}

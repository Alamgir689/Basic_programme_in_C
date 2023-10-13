/*
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the array after the replacement and it's values separated by space.

Example
input
5
1 -2 0 3 4
output
1 2 0 1 1 
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

/*
Given an array A of size N. Print the minimum and the maximum number in the array.

Note: Solve this problem using function.

Input
First line will contain a number N (1 ≤ N ≤ 103) number of elements.

Second line will contain N numbers (0 ≤ Xi ≤ 105).

Output
Print the minimum and the maximum number separated by a space.
Example
input
5
10 13 95 1 3
output
1 95

*/
#include<stdio.h>
int kon()
{
    int n,max,min;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[n]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[0]>arr[i])
        {
            arr[0]=arr[i];
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
            min=arr[i];
        }
    }
    printf("%d %d",max,min);
}

int main()
{
   kon();
return 0;
}


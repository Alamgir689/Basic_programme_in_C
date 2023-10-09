/*
Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.

Example
input
5
1 8 5 7 5
output
8

*/
#include<stdio.h>
int main()
{
int n,a,i,max=0;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    scanf("%d",&a);
    if(a>max)
    {
        max=a;
    }
}
printf("%d\n",max);

return 0;
}

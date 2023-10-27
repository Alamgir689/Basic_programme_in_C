/*
outputstandard output
Given a number N. Print a face down right angled triangle that has N rows.

For more clarification see the example below.

Input
Only one line containing a number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.

Example
input
4
output
****
***
**
*

*/
#include<stdio.h>
int main()
{

int n,k;
scanf("%d",&n);
k=n;
for(int i=0;i<n;i++)
{
    for(int j=0;j<k;j++)
    {
        printf("*");
    }
    k--;
    printf("\n");
}

return 0;
}

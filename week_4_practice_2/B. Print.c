/*
Given a number N. Print all numbers from 1 to N.

Note: Solve this problem using function.

Input
Only one line contains a number N (1 ≤ N ≤ 103).

Output
print numbers form 1 to N separated by a single space.

Example
input
5
output
1 2 3 4 5
Note
Don't use any leading or trilling spaces.


*/
#include<stdio.h>
int sum(int a)
{
    for (int i=1;i<a;i++)
{
     printf("%d ",i);
}
printf("%d",a);
}
int main()
{
int c;
scanf("%d",&c);
sum(c);

return 0;
}

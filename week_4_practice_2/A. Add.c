/*
Given two numbers X and Y, Print their summation.

Note: Solve this problem using function.

Input
Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).

Output
Print the summation value.

Example
input
5 2
output
7

*/
#include<stdio.h>
int sum(int a,int b)
{
    int sum=a+b;
printf("%d",sum);

}
int main()
{
int c,d;
scanf("%d %d",&c,&d);
sum(c,d);

return 0;
}

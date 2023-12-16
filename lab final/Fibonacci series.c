#include <stdio.h>
int fibonacci_function(int n)
{
if(n == 0 )
{
return 0;
}
else if(n == 1)
{
return 1;
}
else
{
return fibonacci_function(n-1) + fibonacci_function(n-2);
}
}
int main()
{
int fib_n, num;
printf("input a number that whose you want to fibonacci: ");
scanf("%d", &num);
printf("\nfibonacci series is: ");
for(int i=1; i<=num; i++)
{
fib_n= fibonacci_function(i);
printf("%d ", fib_n);
}
printf("\n\n\n");
}


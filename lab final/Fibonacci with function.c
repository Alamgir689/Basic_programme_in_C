#include <stdio.h>
int fibo(int i)
{
 if(i==0){
 return 0;
 }
 if(i==1){
 return 1;
 }
 else
 return fibo(i-1)+fibo(i-2);
}
int main()
{
 int i,n;
 printf("Enter n'th numbers: ");
 scanf("%d",&n);
 for(i=1; i<=n; i++)
 {
 printf("%d \t",fibo(i));
 }
}


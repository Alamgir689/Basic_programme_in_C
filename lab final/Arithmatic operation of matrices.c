
#include<stdio.h>
int main()
{
    int a,b,sum,mul;
    scanf("%d %d",&a,&b);
    int *p=&a;
    int *d=&b;
    sum=*p+*d;
    printf("%d\n",sum);
    mul=(*p) * (*d) ;
    printf("%d\n",mul);
    return 0;
}
n

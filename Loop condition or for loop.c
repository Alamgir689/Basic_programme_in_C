#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter your digit\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%d is even\n",i);
        }
        else
        {
            printf("%d is odd\n",i);

        }

     }
     return 0;
}

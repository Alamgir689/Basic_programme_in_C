/*
function calling using parameter without return
*/
#include<stdio.h>
int char_to_ascii(char a)
{

    if(a>='A' && 'Z'>=a)
    {
        a=a+32;
        printf("%c",a);
    }
}
int main()
{

char s;

char_to_ascii('A');


return 0;
}

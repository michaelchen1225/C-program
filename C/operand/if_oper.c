#include <stdio.h>
#include <stdlib.h>
int main()
{
    if(5>2)
        printf("5>2 is true\n");    /*不用加;   結尾再加就好*/
    if(1)     /*只要非0都是true*/
        printf("this line will be exe no matterwhat\n");
    if(3==8)
        printf("3=8is true");
    
    return 0;

}
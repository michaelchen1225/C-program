#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int a,b;
    printf("enter a number:");
    scanf("%d,%d",&a,&b);
    switch(a+b)
    {
        case 8:
        printf("yes");
        break;

        default:
        printf("no");

    }
    return 0;

}

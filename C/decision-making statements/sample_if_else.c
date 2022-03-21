#include <stdio.h>
#include <stdlib.h>
int main()       
{
    int num;
    printf("enter a num");
    scanf("%d",num);

    if(num>0)
        printf("grater than 0\n");
    else
        printf("smaller or eq 0\n");
    printf("end.....");

    return 0;
}
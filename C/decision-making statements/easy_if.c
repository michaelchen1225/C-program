#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1,num2,lager;
    printf("enter 2 int: ");
    scanf("%d %d",&num1,&num2);

    num1>num2 ? (lager=num1) : (lager=num2);  /*也可寫:lager=num1>num2 ? num1 : num2; */
    printf("%d is lager",lager);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    

    printf("enter 2 int:");
    scanf("%d,%d",&a,&b);   /*多個輸出碼可用,或空白殼開,但輸入時要記得是,還是空白*/
    printf("%d+%d=%d",a,b,a+b);   

    return 0;
}
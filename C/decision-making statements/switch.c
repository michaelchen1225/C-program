#include <stdio.h>
int main()
{
    int a,b;
    char oper;
    printf("pls enter a oper(ex:3+2): ");
    scanf("%d %c %d",&a,&oper,&b);

    switch (oper)
    {
    case '+':
        printf("%d+%d=%d\n",a,b,a+b);
        break;
    case '-':
        printf("%d-%d=%d\n",a,b,a-b);
        break;
    case '*':
        printf("%d*%d=%d\n",a,b,a*b);
        break;
    case '/':
        printf("%d/%d=%d\n",a,b,a/b);
        break;
    default:
        printf("error\n");
    }

    return 0;
   
}
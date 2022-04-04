#include <stdio.h>
int main()
{
    int n,i=1,sum=0;
    do
    {
        printf("pls enter n's value (n>0): ");
        scanf("%d",&n);
    }
    while(n<=0);   /* if n<0 , enter a number once again */

    do 
        sum+=i++;   /* i+1 after sum +=i */
    while(i<=n);
    printf("1+2+...+%d=%d",n,sum);

    return 0; 
}
    

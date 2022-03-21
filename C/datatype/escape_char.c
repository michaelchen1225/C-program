#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char beep='\a';
    char ch='\"';
    printf("%c",beep);  /*響一聲警告音*/
    printf("ASCII of beep=%d\n",beep);   /*印出其ASCII值*/
    printf("%cwe are the champ %c",ch,ch);  /*有幾個%,就有幾個引數*/
    return 0;
}
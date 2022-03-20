#include <stdio.h>
#include <stdlib.h>
int main()
{
    char name[10];

    printf("what ur name?");
    scanf("%s",name);            /*編譯器會自動加入\0放在結尾*/
    printf("hi!,%s!",name);     /*逐一印出字串,直到遇到\0  */
    return 0;
}
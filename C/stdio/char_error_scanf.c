#include <stdio.h>
#include <stdlib.h>
int main()                         /*錯誤原因:因為輸入完int後按下enter,讓scanf讀取,但enter實際上有CR(回歸-->讓scanf讀取*/
{                                   /*和LF(換行)兩動作,而LF會留在緩衝區,被12行的scanf讀取(LF的ASCII就是10)   */
    int num;
    char ch;

    printf("emter a int:");
    scanf("%d",&num);
    printf("enter a char:");
    scanf(" %c",&ch);                 /*修正:加一個空白在%c前面,讓scanf部讀取不可列印的換行字元,或加入fflush(stdin)在第10行scanf後  */
    printf("num=%d,ASCII of ch=%d",num,ch); /*錯誤結果:enter a char:num=22,ASCII of ch=10 */

    return 0;
}
/*prog2_1,簡單的C語言*/
#include <stdio.h>  /*include stdio.h*/
#include <stdlib.h> /*include stdlib.h*,如果dos視窗沒關不需要這行*/

int main(void)      /*主函數main()從這裡開始*/
{
    int num;         /*宣告整數變數num*/
    num=2;
    printf("I have %d cats.\n",num);    /*呼叫printf()函數*/
    printf("You have %d cats, too.\n",num);
    system("pause");     /*呼叫dos裡的pause指令,用來暫停程式,如果dos視窗沒關就不需要這行*/
    return 0;  

}
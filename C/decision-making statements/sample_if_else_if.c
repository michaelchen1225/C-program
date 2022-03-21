#include <stdio.h>
#include <stdlib.h>
int main()       
{
    int score;
    printf("ur score: ");
    scanf("%d",&score);
    
    if(score>=80)
        printf("A\n");
    else if (score>=70)
        printf("B\n");
    else if(score>=60)
        printf("C\n");
    else 
        printf("f\n");
    printf("end......");

    
    

    return 0;
}
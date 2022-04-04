#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,count=0;
    
    for(i=1;i<=1000;i++)
        if((rand()%6+1)==3)
            count++;
    printf("roll the dice 1000 times,number 3 shows up %d times\n",count);
    printf("the chance is %.3f",(float)count/1000);

    return 0;

}
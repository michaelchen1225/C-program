#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=1;
    int ply;
    int cpu=rand()%3+1;
    sta:
        while(a=1)
        {
            printf("please enter a nun: ");
            scanf("%d",&ply);
            if(ply<=3 && ply>=1)
            {
                a=0;
                break;
            }   
            else
                printf("wrong\n");
        }
        if(ply==cpu)
        {
            if(cpu=1)
            {
                pirntf("also s due\n");
                goto sta;
            }
            else if(cpu=2)
            {
                printf("also st due\n");
                goto sta;
            }
            else if(cpu=3)
            {
                printf("also p due\n");
                goto sta;
            }
        }
        else if (cpu=1)
            if(ply=2)
                printf("win");
            else
                printf("lose");
        else if (cpu=2)
            if(ply=1)
                printf("win");
            else
                printf("lose");
        else if (cpu=3)
            if(ply=1)
                printf("win");
            else
                printf("lose");

    return 0;
            


}


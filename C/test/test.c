#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char ch;
    int n2,n3,n4,n5,n6,n7,n8,n9,n10;
    int test=0;
    int aftchn=0;
    int ntotol=0;
    printf("enter a id: ");
    scanf("%c %d %d %d %d %d %d %d %d %d",&ch,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
    ch=toupper(ch);
    if(isalpha(ch)!=1)
        test=10;
    if(n2>9)
        test+=1;
    else
        n2*=8;
    if(n3>9)
        test+=1;
    else
        n3*=7;
    if(n4>9)
        test+=1;
    else
        n4*=6;   
    if(n5>9)
        test+=1;
    else
        n5*=5;
    if(n6>9)
        test+=1;
    else
        n6*=4;
    if(n7>9)
        test+=1;
    else
        n7*=3;
    if(n8>9)
        test+=1;
    else
        n8*=2;
    if(n9>9)
        test+=1;
    if(n10>9)
        test+=1;  
    if(test!=0)
        printf("not ");
    
    if(ch>='A' && ch<='H')
        ch-=55;
    else if(ch>='J' && ch<='N')
        ch-=56;
    else if(ch>='P' && ch<='V')
        ch-=57;
    else if(ch>='X' && ch<='Y')
        ch-=58;
    else if(ch=='W')
        ch=32;
    else if(ch=='Z')
        ch=33;
    else if(ch=='I')
        ch=34;
    else if(ch=='O')
        ch=35;
    aftchn+=(ch/10)+(ch%10)*9;
    ntotol=n10+n2+n3+n4+n5+n6+n7+n8+n9+aftchn;
    if(ntotol%10==0)
        printf("ligal");
    else
        printf("not");


       
        
        

    return 0;

}
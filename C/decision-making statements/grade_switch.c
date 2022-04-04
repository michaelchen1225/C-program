#include <stdio.h>
int main()
{
    char grade;
    printf("input a grade: ");
    scanf("%c",&grade);

    switch (grade)
    {
    case'a':
    case'A':
        printf("excellent!\n");
        break;
    case'b':
    case'B':
        printf("good!\n");
        break;
    case'c':
    case'C':
        printf("pls study hader!\n");
        break;
    default:
        printf("failed!\n");

    }
    return 0;
}




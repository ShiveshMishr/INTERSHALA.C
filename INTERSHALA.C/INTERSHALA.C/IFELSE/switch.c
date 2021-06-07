#include<stdio.h>
int main()
{
    char grade = 'x';
    puts("FEEDBACK");
    printf("ENTER THE GRADE = ");
    scanf("%c",&grade);
    switch (grade)
    {
    case 'A': puts("excllent keep it up");
        break;
    case 'B': puts("very good keep it up");
        break;
    case 'C': puts("good try improving in the next exam ");
        break;
    case 'D': puts("average need to hard work");
        break;
    case 'E': puts("poor need a lot of hard work");
    break;
    case 'F': puts("failed you need to attend special classes after school");
    break;
    default:puts("INVALID INPUTS");
        break;
    }
}
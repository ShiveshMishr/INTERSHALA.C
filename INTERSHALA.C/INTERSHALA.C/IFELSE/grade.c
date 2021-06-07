#include<stdio.h>
int main()
{
    int marks;
    printf("ENTER THE MARKES SECURED = ");
    scanf("%d",&marks);
    char grade = 'x';
    if (marks>=450 && marks<500){
        grade = 'A';
    }else if (marks>=400 && marks<450){
        grade = 'B';
    }else if (marks>=350 && marks<400){
        grade = 'C';
    }else if (marks>=250 && marks<350){
        grade = 'D';
    }else if (marks>=150 && marks<250){
        grade = 'E';
    }else if (marks>=0 && marks<150){
        grade = 'F';
    }else {
        printf("INVALID INPUT");
    }
    if (grade != 'x');
    printf("grade = %c",grade);
}
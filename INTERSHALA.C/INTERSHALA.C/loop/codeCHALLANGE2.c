#include<stdio.h>
int main()
{
    long num ;
    int count=0 ;

    printf("ENTER THE NO. = ");
    scanf("%ld",&num);

    while (num > 0)
    {
        count++;
        num /=10;
    }
    printf(" TOTAL NO OF DIGITS :%d",count);
    return 0;
}
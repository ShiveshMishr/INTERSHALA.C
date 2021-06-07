#include <stdio.h>

int main()
{
    int num1, num2;
    int *p, *p2;
    p = &num1;
    p2 = &num2;


    printf("Enter The Number = ");
    scanf("%d", &num1);
    printf("Enter The Number = ");
    scanf("%d", &num2);

    

    int sum = *p + *p2;
    printf("sum = %d", sum);
}
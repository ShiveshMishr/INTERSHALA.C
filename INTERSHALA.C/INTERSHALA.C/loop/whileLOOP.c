#include<stdio.h>
int main()
{
    //wap to print a  natural no till n.

    int num = 1 , n ;

    puts("ENTER THE NO = ");
    scanf("%d", &n);

    while (num <= n)
    {
        printf("%d\n",num);
        num++;
    }
    
}
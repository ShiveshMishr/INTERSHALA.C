#include<stdio.h>

int main()

{
    int reserved =0 , remainder , num ;

    printf("ENTER THE NO = ");
    scanf("%d",&num);

    int original = num;
    
    do {
        remainder = num % 10;
        reserved = (reserved * 10) + remainder;
        num = num / 10;
        
    }while (num > 0);


    if (original == reserved){
            printf("IT IS A PALINDROME");
        } else
            printf("IT IS NOT PALINDROME");
        

}
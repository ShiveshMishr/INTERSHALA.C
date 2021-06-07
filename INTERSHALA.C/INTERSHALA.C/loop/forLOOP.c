#include<stdio.h>
int main()
{
    // for loop statement 
    /*frist iniclise ;
        then give condition;
        and do increment or decrement ;
        for (int ; condition ; inc\dec){
            code 
        }
    */

   //wap to find out no from 1 to 4.

    for (int num = 1 ; num <=100 ; num++){
        if (num % 2 != 0)
        printf("%d\n",num);
    }
}
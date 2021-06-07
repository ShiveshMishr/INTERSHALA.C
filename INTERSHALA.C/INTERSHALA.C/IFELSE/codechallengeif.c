#include <stdio.h>
int main()
{
    float payableamount,discount;
    puts("Enter the amount = ");
    scanf("%f",&payableamount);
    if (payableamount>=500) {
        puts("ELEGIBLE FOR DISCOUNT");
        discount = payableamount * 0.95;
    }else  {
        puts("NOT ELEGIBLE FOR ORDER");
       discount = payableamount;
    }
    printf("DISCOUNT AVAILED = rs %0.1f\n",payableamount-discount);
    printf("payable amount = rs%f",discount);
}
#include<stdio.h>
int main()
{
    float bill , payableamount , tax , discount , totalbill ;
    printf("ENTER THE BILL = ");
    scanf("%f",&bill);
    tax = bill * 5/100;
    printf("TOTAL TAX = %f\n",tax);
    printf("TOTAL BILL = %f\n", totalbill = tax + bill);
    if (totalbill>=1000){
        discount = totalbill * 1/10;
        printf("DISCOUNT = %f\n", discount);
        payableamount = totalbill - discount;
        printf("PAYABLE AMOUNT = %f", payableamount);
    } else {
        payableamount = totalbill;
        printf("PAYABLE AMOUNT = %f",payableamount);
    }

}
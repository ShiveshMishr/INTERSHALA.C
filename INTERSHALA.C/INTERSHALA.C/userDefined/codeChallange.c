#include<stdio.h>
#include<string.h>

struct Bookdetail
{
    char title[20];
    char author[30];
    float price ;
};
int main(){
    struct Bookdetail b1 , b2;
    strcpy(b1.title , "serlocks");
    strcpy(b1.author , "Homies");
    b1.price = 500;
    printf("Bookdetail \n Title: %s \n Author: %s \n Price: %.2f \n" ,b1.title,b1.author,b1.price);

     strcpy(b2.title , "one year");
    strcpy(b2.author , "chetan bagat");
    b2.price = 1000;
    printf("Bookdetail \n Title: %s \n Author: %s \n Price: %.2f", b2.title , b2.author , b2.price);
    return(0);
}
#include<stdio.h>
#include<string.h>

union Bookdetail
{
    char title[20];
    char author[30];
    float price ;
};
int main(){
    union Bookdetail b1 , b2;
    strcpy(b1.title , "serlocks");
    printf("title:%s",b1.title);
    strcpy(b1.author , "Homies");
    printf("author:%s",b1.author);
    b1.price = 500;
    printf("Price: %.2f \n",b1.price);

     strcpy(b2.title , "one year");
     printf("title:%s",b2.title);
    strcpy(b2.author , "chetan bagat");
    printf("author:%s",b2.author);
    b2.price = 1000;
    printf("Price: %.2f", b2.price);
    return(0);
}
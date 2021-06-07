#include<stdio.h>

int main()
{
    int number[10] , i=0 , largest = 0;

     while (i < 10) {
        printf("Enter number %d:", i + 1);
        scanf("%d", &number[i]);

        /* If the current number (i.e. a[i]) entered by user is greater than the last value of ‘largest’ variable then the current number (a[i]) becomes the new largest number. */
        if (number[i] > largest)
            largest = number[i];

        i++;
    }
    printf("the no are :\n");
     for (int i = 0 ; i < 10 ; i++){
        printf(" %d\n= ", number[i]);
    }
    printf("\nthe largest no is = %d",largest);
    
}
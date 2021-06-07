#include <stdio.h>

int main()

{
    int num[3] = { 40 , 7 , 12 };

    //MODIFICATION
    num[1] = 453;
    num[0] = 45;

    //print all arays using loop.
    for (int i = 0 ; i < 3 ; i++){
       printf("%d\n",num[i] );
    }

    //user input

    long score[5];

    for ( int i=0 ; i < 5 ; i++){
        printf("ENTER THE VALUE %d= ",i);
        scanf("%ld",&score[i]);
    }
    printf("print element of score = ");
    for (int i = 0 ; i < 5 ; i++){
       printf("%d\n",score[i] );
    }
}

#include<stdio.h>
#include<math.h>

int main()
{
    int n ;
    long sum=0;
    
    printf("ENTER THE VALUE =");
    
    scanf("%d",&n);


    for (int num = 1 ; num <= n ; num++){
        sum = sum + (num * num);
    }
    
        printf("sum:%ld",sum);
    
}
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    float *p , sum=0;
    puts("Enter the n = ");
    scanf("%d",&n);

    p = (float*) calloc(n , sizeof(float));

    if (p == NULL)
    {
        puts("The memory allocation is failed");
        exit(0);
    } else
    {
        puts("enter the data");

        for (int i = 0; i < n; i++)
        {
            scanf("%f", p+i);
        }
        for (int i = 0; i < n; i++)
        {
            sum= sum +p[i];
        }
        printf("sum = %.2f", sum);
        
    }
    
    return(0);
}
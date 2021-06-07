#include <stdio.h>
int main()
{
    int arr[2][3], sum = 0;
    //USER INPUT
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("enter the array =");
            scanf("%d", &arr[r][c]);

            sum += arr[r][c];
        }
    }
    //PRINT VALUE
    puts("The Entered 2d Array =");
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d\t",arr[r][c]);
        }
        printf("\n");
    }

    printf("The Sum of Arrays = %d", sum);
}
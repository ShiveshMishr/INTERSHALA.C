#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    float *p, sum = 0;

    puts("Enter n: ");
    scanf("%d", &n);

    p = (float *)calloc(n, sizeof(float));

    if (p == NULL)
    {
        puts("Memory allocation failed");
        exit(0);
    }
    else
    {
        puts("Enter data: ");

        /* User input. */
        for (int i = 0; i < n; i++)
        {
            scanf("%f", p + i); // Elements are being stored at their address.
        }

        int c, newsize;
        puts("Enter c: ");
        scanf("%d", &c);
        newsize = c + n;
        p = (float *)realloc(p, newsize * sizeof(float));

        printf("Enter data = ");
        for (int i = n; i < newsize; i++)
        {
            scanf("%f", p + i); // Elements are being stored at their address.
        }

        //store more values
        for (int i = 0; i < newsize; i++)
        {
            sum = sum + p[i];
        }
        //print the value
        printf("The sum is %.2f", sum);
    }

    free(p);

    return 0;
}
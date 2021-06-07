#include <stdio.h>

void countoddnumbers(int[], int);

int main()
{
    int number[10] = {2, 98, 99, 27, 31, 53, 88, 92, 11, 12};

    countoddnumbers(number, 10);

    return 0;
}
void countoddnumbers(int num[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (num[i] % 2 != 0)
            count++;
    }
    printf("THE NUMBER OF ODD NO ARE : %d", count);
}

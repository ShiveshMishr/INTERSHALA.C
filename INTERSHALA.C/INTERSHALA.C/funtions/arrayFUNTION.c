// WAP TO CALCULATE THE AVERAGE OF 5 ARRAYS .

#include <stdio.h>
double getAverage(float[] , int);

int main()
{
    float number[5] = {445, 88.8, 78.3, 12.4, 44};

    double avg = getAverage(number, 5);
    printf("AVERAGE SUM : %lf", avg);
    return 0;
}

double getAverage(float arr[], int size)
{

    double sum = 0, avg;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / size;
    return avg;
}

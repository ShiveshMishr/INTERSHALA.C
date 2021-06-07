#include <stdio.h>
double getPerimeter(double, double);

int main()
{
    double length, breath, perimeter;
    printf("ENTER THE LENGTH = ");
    scanf("%f", &length);
    printf("ENTER THE BREADTH = ");
    scanf("%f", &breath);

    perimeter = getPerimeter(length, breath);
    printf("PARIMETER OF RECTANGLE = %f", perimeter);
return 0;
}
    double getPerimeter(double length, double breath)
    {
        return 2 * (length + breath);
    }
   


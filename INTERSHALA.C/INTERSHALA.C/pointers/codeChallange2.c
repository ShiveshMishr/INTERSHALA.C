#include<stdio.h>
float pointer(float * , int);
int main()
{
    float numbers[5] = {983, 2.9, 34, 433, 1000.567};
    float *ptr = numbers;
    

    float num = pointer(ptr , 5);
    printf("largest value = %.4f",num);
    return 0;

}
float pointer(float *num , int size){
    float largest = *num;
    for(int i=0 ; i<size ; i++){
        if(*num > largest){
           largest = *num;
         
        }
      *num++;
    }
    return largest;
}

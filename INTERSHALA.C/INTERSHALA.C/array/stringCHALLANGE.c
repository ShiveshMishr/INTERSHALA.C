#include <stdio.h>
#include <string.h>

int main()

{
    //user input
    char str1[20];
    printf("ENTER THE NAME :");
    scanf("%[^\n]%*c", str1);
    
    printf("NAME:%s\n", str1);
    char str2[20];
    printf("ENTER THE NAME :");
    scanf("%[^\n]%*c", str2);
    printf("NAME:%s\n", str2);

//giving gap after str1 
    strcat(str1, " ");
    // puting str2 after str1
    strcat(str1, str2);
    printf("strcat result:%s\n", str1);

  
}
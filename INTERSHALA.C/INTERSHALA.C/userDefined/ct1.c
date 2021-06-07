#include<stdio.h>

int main()
{
int i=3;
goto Label;
i=1;
while(i<=10)
{
printf("%d\n",i);
Label:
i=i+2;
}
}
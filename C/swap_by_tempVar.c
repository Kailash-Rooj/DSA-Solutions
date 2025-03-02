#include<stdio.h>

int main()
{
    int num1 , num2;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1 , &num2);
    
    printf("Before swap: ");
    printf("num1 = %d, num2 = %d\n", num1 , num2);

    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swap: ");
    printf("num1 = %d, num2 = %d\n", num1 , num2);
    return 0;
}
#include<stdio.h>

int main()
{
    int org , rev , num;
    rev = 0;
    printf("Enter number: ");
    scanf("%d",&org);
    num = org;

    while(num > 0){
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }

    printf("After reversing: %d\n",rev);

    return 0;
}
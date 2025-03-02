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

    if(org == rev)
        printf("It's palindrome\n");
    else{
        printf("It's not palindrome\n");
    }

    return 0;
}
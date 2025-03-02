#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num % 2 == 0)
        printf("It's a Even number....\n");
    else{
        printf("It's not a even number....\n");
    }
    return 0;
    
}
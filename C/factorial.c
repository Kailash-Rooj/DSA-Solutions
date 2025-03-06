#include<stdio.h>

int main()
{
    int num , ans , i;
    ans = 1;
    printf("Enter Number: ");
    scanf("%d",&num);

    if(num < 0){
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    else{
        for(i = 2; i<= num; i++){
        ans *= i;
        }
    }

    printf("Factorial of %d: %d\n", num , ans);
    return 0;
}
#include<stdio.h>

int main()
{
    int num , isPrime , i;
    isPrime = 1;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num <= 1)
        isPrime = 0;
    else{
        for(i=2; i*i<=num; i++){
            if(num%i == 0){
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime)
        printf("It's a prime number.");
    else{
        printf("It's not a prime number.");
    }
    return 0;
}
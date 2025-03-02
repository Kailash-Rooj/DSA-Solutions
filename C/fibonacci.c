#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number : ");
    scanf("%d", &n);

    
    printf("Fibonacci Series: ");
    int i =1;
    while (i<= n) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        i++;
    }
    
    return 0;
}

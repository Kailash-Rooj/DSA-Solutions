#include<stdio.h>

int main(){
    int row , i ,j;
    printf("Enter no of rows: ");
    scanf("%d", &row);

    for(i = 0; i < row; i++){
        for(j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
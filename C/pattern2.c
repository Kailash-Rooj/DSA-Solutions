#include<stdio.h>

int main(){
    int row , i ,j;
    printf("Enter no of rows: ");
    scanf("%d", &row);

    for(i = 1; i <= row; i++){
        for(j = 1; j <= i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
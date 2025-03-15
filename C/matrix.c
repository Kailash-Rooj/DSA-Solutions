#include <stdio.h>

void sum(int mat1[10][10], int mat2[10][10], int row1, int col1);
void sub(int mat1[10][10], int mat2[10][10], int row1, int col1);
void multiply(int mat1[10][10], int mat2[10][10], int row1, int col1, int row2, int col2);

int main()
{
    int row1, row2, col1, col2, i, j;
    int mat1[10][10], mat2[10][10];

    printf("Enter row no of 1st matrix: ");
    scanf("%d", &row1);
    printf("Enter column no of 1st matrix: ");
    scanf("%d", &col1);

    printf("Enter row no of 2nd matrix: ");
    scanf("%d", &row2);
    printf("Enter column no of 2nd matrix: ");
    scanf("%d", &col2);

    printf("Enter the elements of 1st matrix:\n");
    for (i = 0; i < row1; i++)
        for (j = 0; j < col1; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter the elements of 2nd matrix:\n");
    for (i = 0; i < row2; i++)
        for (j = 0; j < col2; j++)
            scanf("%d", &mat2[i][j]);

    char option;
    printf("Menu: '+' for addition, '-' for subtraction, '*' for multiplication, 'x' for exit.\n");

    do
    {
        printf("Enter the operation: ");
        scanf(" %c", &option);

        if (option == '+')
        {
            if (row1 == row2 && col1 == col2)
                sum(mat1, mat2, row1, col1);
            else
                printf("Invalid Dimension!!!!!\n");
        }
        else if (option == '-')
        {
            if (row1 == row2 && col1 == col2)
                sub(mat1, mat2, row1, col1);
            else
                printf("Invalid Dimension!!!!!\n");
        }
        else if (option == '*')
        {
            if (col1 == row2)
                multiply(mat1, mat2, row1, col1, row2, col2);
            else
                printf("Invalid Dimension!!!!!\n");
        }
        else if (option != 'x')
        {
            printf("Invalid input!!!\n");
        }

    } while (option != 'x');

    return 0;
}

void sum(int mat1[10][10], int mat2[10][10], int row1, int col1)
{
    int i, j, result[10][10];

    for (i = 0; i < row1; i++)
        for (j = 0; j < col1; j++)
            result[i][j] = mat1[i][j] + mat2[i][j];

    printf("After addition:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
            printf("%4d", result[i][j]);
        printf("\n");
    }
}

void sub(int mat1[10][10], int mat2[10][10], int row1, int col1)
{
    int i, j, result[10][10];

    for (i = 0; i < row1; i++)
        for (j = 0; j < col1; j++)
            result[i][j] = mat1[i][j] - mat2[i][j];

    printf("After subtraction:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
            printf("%4d", result[i][j]);
        printf("\n");
    }
}

void multiply(int mat1[10][10], int mat2[10][10], int row1, int col1, int row2, int col2)
{
    int i, j, k, result[10][10] = {0};

    for (i = 0; i < row1; i++)
        for (j = 0; j < col2; j++)
            for (k = 0; k < col1; k++)
                result[i][j] += mat1[i][k] * mat2[k][j];

    printf("After Multiplication:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
            printf("%4d", result[i][j]);
        printf("\n");
    }
}

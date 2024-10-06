#include <stdio.h>
#include <stdlib.h>

void terminate_exe(const char* error_message)
{
    printf("%s\n", error_message);
    exit(1);
}

void createMatrix();
void printMatrix();

int main()
{
    int option;
    printf("MATRIX CALCULATOR\n");
    printf("-----------------\n");
    printf("1. Create a matrix\n");
    printf("2. Edit a matrix\n");
    printf("3. Get determinant of a matrix\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        createMatrix();
        break;
    
    default:
        break;
    }
    return 0;
}

void createMatrix()
{
    printf("Matrix Dimensions (m x n)\n");
    int m, n;
    printf("m = ?\n");
    scanf("%d", &m);
    printf("n = ?\n");
    scanf("%d", &n);
    if (m <= 0 && n <= 0)
    terminate_exe("Invalid dimensions (Accepts positive non-zero integers)\n");



    int **matrix = (int **)malloc(m * sizeof(int *));
    if (matrix == NULL) 
    terminate_exe("Memory allocation (m) failed!\n");

    for (int iter = 0; iter < m; iter++)
    {
        matrix[m] = (int *)malloc(n * sizeof(int));
        if (matrix[m] == NULL)
        terminate_exe("Memory allocation (n) failed!");
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Mat %d,%d = ?\n", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix created!");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}


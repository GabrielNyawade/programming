#include <stdio.h>

int a, b, c, d, e, f, g, h, i;


void createMatrix();

int main()
{
    printf("MATRIX CALCULATOR\n");
    printf("1. Create a matrix\n");
    printf("2. Edit a matrix\n");
    printf("3. Get determinant of a matrix\n");
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
    int matrix[m][n];

    if (m == 1 && n == 1)
    {
        printf("Mat 1,1?");
        scanf("%d", &a);
        matrix = {a};
    }
}
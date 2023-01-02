#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int funct(int mat[100][100], int, int, int, int);
int det(int A[100][100], int, int);

int main()
{

    printf("Choose from below:\n");
    printf("To combine two input matrices and obtain the symmetry and derivative of the resulting matrix, \n");
    printf("To acquire the symmetry and derivative of the output matrix and to find the difference between the two input matrices, enter 2.\n");
    printf("To multiply two input matrices and obtain the symmetry and derivative of the resulting matrix, enter 3.");
    printf("\n");
    printf("Enter your choice:");
    int ch;
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        int mat1[100][100], mat2[100][100], sum[100][100];
        int mr, mc, i, j;
        printf("Enter the no. of rows and columns:");
        scanf("%d %d", &mr, &mc);

        printf("Enter first matrix:\n");
        for (i = 0; i < mr; i++)
        {
            for (j = 0; j < mc; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("Enter second matrix:\n");
        for (i = 0; i < mr; i++)
        {
            for (j = 0; j < mc; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }
        printf("The addition matrix is:\n");
        for (i = 0; i < mr; i++)
        {
            for (j = 0; j < mc; j++)
            {
                sum[i][j] = mat1[i][j] + mat2[i][j];
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
        funct(sum, i, j, mr, mc);
        det(sum, mr, mc);
        break;

    case 2:
        printf("Enter the no. of rows and columns:");
        scanf("%d %d", &mr, &mc);

        printf("Enter first matrix:\n");
        for (i = 0; i < mr; i++)
        {
            for (j = 0; j < mc; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("Enter second matrix:\n");
        for (i = 0; i < mr; i++)
        {
            for (j = 0; j < mc; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }
        int sub[100][100];
        printf("The subtraction matrix is:");
        printf("\n");
        for (i = 0; i < mr; i++)
        {
            for (j = 0; j < mc; j++)
            {
                sub[i][j] = mat1[i][j] - mat2[i][j];
                printf("%d ", sub[i][j]);
            }
            printf("\n");
        }
        funct(sub, i, j, mr, mc);
        det(sub, mr, mc);
        break;

    case 3:
        int r1, c1;
        printf("Enter no. of rows and coloumns for 1st matrix:");
        scanf("%d %d", &r1, &c1);
        int r2, c2;
        printf("Enter no. of rows and coloumns for 2nd matrix:");
        scanf("%d %d", &r2, &c2);

        printf("Enter first matrix:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("Enter second matrix:\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }
        int mt[100][100];
        if (r1 == r2 && c1 == c2)
        {
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c2; j++)
                {
                    mt[i][j] = 0;
                    for (int k = 0; k < r2; k++)
                    {
                        mt[i][j] += mat1[i][k] * mat2[k][j];
                    }
                }
            }
            printf("The multiplication matrix is:\n");
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c2; j++)
                {
                    printf("%d ", mt[i][j]);
                    printf("");
                }
                printf("\n");
            }
        }
        else if (c1 != r2)
        {
            printf("Matrices are not compatible for mutiplication");
            printf("\n");
        }
        else
        {
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c2; j++)
                {
                    for (int k = 0; k < r2; k++)
                    {
                        mt[i][j] += mat1[i][k] * mat2[k][j];
                    }
                }
            }
            printf("The multiplication matrix is:\n");
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c2; j++)
                {
                    printf("%d ", mt[i][j]);
                    printf("");
                }
                printf("\n");
            }
        }
        funct(mt, i, j, r1, c2);
        det(mt, r1, c2);
        break;
    }
    return 0;
}

int funct(int mat[100][100], int r, int c, int rw, int cl)
{
    int sym[100][100], count = 0;
    for (r = 0; r < rw; r++)
    {
        for (c = 0; c < cl; c++)
        {
            sym[c][r] = mat[r][c];
        }
    }
    for (r = 0; r < rw; r++)
    {
        for (c = 0; c < cl; c++)
        {
            if (sym[r][c] != mat[r][c])
            {
                count = 1;
            }
        }
    }

    if (count == 1)
    {
        printf("It is not a symetric matrix\n");
    }
    else
    {
        printf("It is a symetric matrix\n");
    }
    return 0;
}

int det(int A[100][100], int n, int m)
{
    if (n != m)
    {
        printf("Determinant not possible i.e rectangular matrix");
    }
    else if (n == 2 && m == 2)
    {
        int determinant = A[0][0] * A[1][1] - A[0][1] * A[1][0];
        printf("The determinant is: %d", determinant);
    }
    else if (n == 3 && m == 3)
    {
        int cof1 = (A[1][1] * A[2][2]) - (A[2][1] * A[1][2]);
        int cof2 = (A[1][0] * A[2][2]) - (A[2][0] * A[1][2]);
        int cof3 = (A[1][0] * A[2][1]) - (A[2][0] * A[1][1]);

        int determinant = (A[0][0] * cof1) - (A[0][1] * cof2) + (A[0][2] * cof3);
        printf("The determinant is: %d", determinant);
    }
    return 0;
}
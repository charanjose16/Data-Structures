#include <stdio.h>

int main()
{
    int i, j, k;
    int A[3][3];
    int B[3][3];
    int C[3][3];

    printf("Enter the elements of first matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of second matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    printf("The result of matrix multiplication is: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

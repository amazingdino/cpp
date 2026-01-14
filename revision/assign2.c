#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row, col, i, j;

    printf("Get your row value and col value: ");
    scanf("%d %d", &row, &col);

    int **matrix = (int**)malloc(sizeof(int *) * row); 

    for(i=0; i<row; i++)
    {
        matrix[i] = (int *)malloc(sizeof(int) * row);
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++)
    {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, i, sum = 0;

    double average = 0;

    printf("Enter the number of students you would like to input points: ");
    scanf("%d", &N);

    int *arr = (int *)malloc(sizeof(int) * N);

    for(i=0; i<N;i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum/N;

    printf("The total sum of this student's points is %d\n", sum);
    printf("The average of this student's point is: %lf\n", average);
    
    free(arr);

    return 0;

}
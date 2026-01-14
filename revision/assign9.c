#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *getEvens(int *arr, int size, int *outSize);

int *getEvens(int *arr, int size, int *outSize)
{
    int i, count = 0;

    for(i=0; i<size; i++)
    {
        if(arr[i] %2 == 0)
        {
            count ++;
        }        
    }

    *outSize = count;

    int *evens = (int *)malloc(sizeof(int) * count);
    if(!evens || count == 0)
    {
        return NULL;
    }

    int idx = 0;

    for(i=0; i<size; i++)
    {
        if(arr[i] %2 == 0)
        {
            evens[idx++] = arr[i];
        }
    }

    return evens;

}

int main(void)
{
    int i, N, even_number =0;

    printf("Write the amount of numbers you would like: ");
    scanf("%d", &N);

    int *arr = (int *)malloc(sizeof(int) * N);

    srand((unsigned int) time (NULL));

    for(i=0; i<N; i++)
    {
        arr[i] = rand()%100;
    }

    printf("The original array is : ");
    for(i=0; i<N; i++)
    {
        printf("%d\n", arr[i]);
    }

    int *evens = getEvens(arr, N, &even_number);

    printf("The even number array is : ");
    for(i=0; i<even_number; i++)
    {
        printf("%d\n", evens[i]);
    }

    return 0;
}
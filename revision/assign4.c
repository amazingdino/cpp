#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    int *arr = (int *)malloc(sizeof(int) * 3);
    // calloc = 0 + malloc
    // malloc = malloc
    // realloc = resize allocation += malloc

    printf("Enter your three numbers: ");
    for(i=0; i<3; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<3; i++)
    {
        printf("your number is %d\n", arr[i]);
    }

    arr = (int *)realloc(arr, sizeof(int) * 5);

    printf("Input your additional 2 numbers: ");
    for(i=3; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<5; i++)
    {
        printf("Your final numbers are :%d\n", arr[i]);
    }

    free(arr);

    return 0;
}
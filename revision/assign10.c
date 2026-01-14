#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//i actually do not know how to swap integers into doubles and doubles back to integers there's no way

void genericSwap(void *a, void *b, size_t size);

void genericSwap(void *a, void *b, size_t size)
{

    void *c = (int *)malloc*(sizeof(int) * size);

    memcpy(*a, *b, int);
    memcpy(*a, *b, double);

    free(c);
}

int main(void)
{
    int i, a, b, N;
    double c, d;
    printf("Get your N(Size): ");
    scanf("%d", &N);
    printf("\n");
    printf("Get your int value: ");
    scanf("%d %d", &a, &b);
    printf("\n");
    printf("Get your double value: ");
    scanf("%lf %lf", &c, &d);

    int *arr = (int *)malloc(sizeof(int) * N);

    genericSwap();

    free(arr);

    return 0;
}
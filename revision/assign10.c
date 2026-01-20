#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void genericSwap(void *a, void *b, size_t size);

void genericSwap(void *a, void *b, size_t size)
{

    void *c = malloc(size);//temp

    memcpy(c, a, size); // c 에다 a 저장 = c = a;
    memcpy(a, b, size); // a 에다 b 저장 = a = b;
    memcpy(b, c, size); // b 에다 c 저장 = b = c(a);

    free(c);
}

int main(void)
{
    int a, b;
    double c, d;

    printf("Get your int value: ");
    scanf("%d %d", &a, &b);
    printf("\n");
    printf("Get your double value: ");
    scanf("%lf %lf", &c, &d);

    genericSwap(&a, &b, sizeof(int));
    genericSwap(&c, &d, sizeof(double));

    printf("New int value is %d and %d\n", a, b);
    printf("New double value is %lf and %lf", c, d);

    return 0;
}
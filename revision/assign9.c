#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//짝수만 골라서 새로운 어레이(공간)에다 저장
// 원본 출력 + 짝수 출력 하고 FREE인데

int *getEvens(int *arr, int size, int *outSize);

int *getEvens(int *arr, int size, int *outSize)
{
    int i, count = 0;

    for(i=0; i<size; i++)
    {
        if(arr[i] % 2 == 0) 
        {
            count++; //짝수 개수
        }
    }

    *outSize = count; //이제 짝수들을 사이즈에다 저장

    int *evenarray = (int *)malloc(sizeof(int) * count);

    int idx = 0;

    for(i=0; i<count; i++)
    {
        if(arr[i]% 2 == 0)
        {
            evenarray[idx++] = arr[i];
        }
    }

    return evenarray; 
}

int main(void)
{
    int i, N, j=0;
    int even_number = 0;

    printf("Get your N: ");
    scanf("%d", &N);

    int *array = (int *)malloc(sizeof(int) * N);

    for(i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }

    srand((unsigned int)time(NULL));

    for (int i = 0; i<N;i++)
    {
		array[i]=rand()%100;
    }

    printf("This is the original array: ");
    for(i=0; i<N; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    int *even = getEvens(array, N, &even_number);

    printf("This is the even array: ");

    for(i=0; i<N; i++)
    {
        printf("%d ", even[i]);
    }

    free(even);
    free(array);

    return 0;
}
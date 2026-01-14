#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int N, i;
    char str[100];

    printf("Numbers of words you would like to input: ");
    scanf("%d", &N);

    char **str1 = (char **)malloc(sizeof(char *) * N); //since we gonna store multiple words so we make a multi-dimensional space

    for(i=0; i<N; i++)
    {
        scanf("%100s", str); //scanf string
        str1[i] = (char *)malloc(sizeof(str) + 1); //create space only for the word + '\0'
        strcpy(str1[i], str); //save it into str1
    }

    for(i=0; i<N; i++)
    {
        printf("%s\n", str1[i]);
        free(str1[i]);
    }

    free(str1);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct Book
{
    char *title;
    int price;
}Book;

Book *copyBook(Book *src);

Book *copyBook(Book *src)
{
    Book *copy = (Book *)malloc(sizeof(Book));
    copy = src; // copy

    return copy;
}

int main(void)
{
    Book *n1 = (Book *)malloc(sizeof(Book));
    Book *n2 = (Book *)malloc(sizeof(Book));
    
    n1->title = "Andy";
    n1->price = 1;

    n2 = copyBook(n1);

    printf("The copied version check = Title is %s and price is%d\n", n2->title, n2->price);

    free(n1);
    free(n2);

    return 0;
}
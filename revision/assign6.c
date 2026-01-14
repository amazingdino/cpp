#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;


int main(void)
{
    
    Node *first = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));
    
    first->data = 10;
    // first->next = NULL;
    first->next = second;

    second->data = 20;
    // second->next = NULL;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    Node *q = first;

    while(q!= NULL) //honestly I forgot how to do this part so I had to look at old link_list
    {
        printf("%d\n", q->data);
        q = q->next;
    }
    
    free(first);
    free(second);
    free(third);

    return 0;
}
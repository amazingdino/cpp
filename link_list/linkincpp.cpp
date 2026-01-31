#include <iostream>

using namespace std;

struct Node
{
    int value;
    Node *next;
};

int main(void)
{
    Node *new_node = new Node{1,nullptr};

    Node *first = new Node{2, nullptr};

    new_node->next = first;

    cout << new_node->value << endl; //1
    cout << new_node->next->value << endl; // first => 2?


    return 0;
}
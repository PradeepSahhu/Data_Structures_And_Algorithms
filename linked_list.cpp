// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
};

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // struct pointer
    // Allocate memory for nodes in the linked list in Heap.
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes.
    head->data = 4;
    head->next = second;

    // Link second and third nodes.
    second->data = 8;
    second->next = third;

    // Link third and fourth nodes.
    third->data = 12;
    third->next = fourth;

    // Terminate the list at the fourth list.
    fourth->data = 16;
    fourth->next = NULL;

    // exit(0);


//Head is the start of the linked list.
    linkedListTraversal(head);


    return 0;
}
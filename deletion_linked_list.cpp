// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next; // Self referencing structure...
};
// Always Pass head here...
void linkedListTraversal(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
};

struct Node *deletefirst(struct Node *head)
{

    struct Node *ptr = head;
    head = head->next;
    free(ptr); // Deallocating the memory from the heap...
    return head;
};

struct Node *deleteAtMiddle(struct Node *head, int index)
{

    struct Node *ptr = head;
    for(int i = 0;i<index-1;i++){
        ptr = ptr->next;
    }
    // int i = 0;
    // while (i != index - 1)
    // {
    //     ptr = ptr->next;
    //     i++;
    // }
    struct Node *q = ptr->next;

    ptr->next = q->next;
    free(q); // Deallocating memory from the heap...
    return head;
};

struct Node *deleteAtEnd(struct Node *head)
{

    struct Node *q = head;
    struct Node *ptr = q->next;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }
    q->next = NULL;

    free(ptr); // Deallocating the memory from the heap...
    return head;
};

struct Node *deleteAfterNode(struct Node *head, struct Node *givenNode)
{
    struct Node * ptr = head;
    struct Node * q = ptr->next;
    while(q!=givenNode){
        ptr = ptr->next;
        q = q->next;
    }
    ptr->next = q->next;
    free(q);
    return head;
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Dynamic memory allocation in the heap of memory stack...
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

    cout << "without function" << endl;
    linkedListTraversal(head);

    // cout<<"Running the deletefirst function"<<endl;
    // head = deletefirst(head);
    // linkedListTraversal(head);

    // cout << endl
    //      << "Running the deleteAtMiddle function" << endl;
    // head = deleteAtMiddle(head, 2);
    // linkedListTraversal(head);

    cout << endl
         << "Running the deleteAtEnd function" << endl;
    head = deleteAtEnd(head);
    linkedListTraversal(head);

    // cout << endl
    //      << "Running the deleteAfterNode function" << endl;
    // head = deleteAfterNode(head, second);
    // linkedListTraversal(head);
    return 0;
}
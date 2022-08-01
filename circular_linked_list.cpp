// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

// ********************linked list traversal function*****************
// Always Pass head here...
// void linkedListTraversal(struct Node *ptr)
// {

//     while (ptr != NULL)
//     {
//         printf("Element: %d \n", ptr->data);
//         ptr = ptr->next;
//     }
// };

// ******************************* Circular linked list traversal function ****************
// here *ptr is a head...
// void linkedListTraversal(struct Node *ptr)
// {
//     struct Node* head = ptr;
//     while(ptr->next != head){
//         printf("Element is: %d \n", ptr->data);
//         ptr = ptr->next;
//     }
//     printf("Element is: %d \n", ptr->data);
// }
//******** or by using do-while loop *******
void linkedListTraversal(struct Node *head)
{

    struct Node *ptr = head;
    do
    {
        printf("Element is: %d \n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    // printf("Element is: %d \n", ptr->data);
}
// Code : 2
//  insert a new head node in the beginning of the node
struct Node *insertAtbeginning(struct Node *head, int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = value;
    struct Node *p = head->next;

    while (p->next != head)
    {
        p = p->next;
    }
    // At this point p points to the last node of this circular linked-list.
    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return head; // returning new head.
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

    // Making circular Linked list...

    // Link head note and second node.
    head->data = 5;
    head->next = second;

    // Link second and third node.
    second->data = 54;
    second->next = third;

    // Link third and fourth node.
    third->data = 23;
    third->next = fourth;

    // Link fourth node back to first node.
    fourth->data = 11;
    fourth->next = head; // last node pointer will point to the head, i.e. circular-linked-list

    linkedListTraversal(head);

    cout << "************ Inserting at first *********** " << endl;
    head = insertAtbeginning(head, 80);
    head = insertAtbeginning(head, 70);

    cout << "*******After insertion **********" << endl;
    linkedListTraversal(head);

    return 0;
}
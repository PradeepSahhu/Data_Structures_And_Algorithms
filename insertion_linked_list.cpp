// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next; // Self referencing structure...
};
// Always passing head here...
void linkedListTraversal(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
};

//Case - II
struct Node *insertInIndex(struct Node *head, int data, int index)
{

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        // i++;
        // cout<<i<<endl; //0 1 2: p is already on head, means p is on index 0;
        ++i;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    // cout<<"is it running"<<endl;
    return head; // Returning head because its the same...
};

//Case - I
struct Node *inserAtFirst(struct Node *head, int data) // struct Node *ptr: to directly passing node
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr; // Returing new head...
};

//Case - III
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head; // Returing head...
};
//Case - IV
struct Node *insertAfterNode(struct Node *head,struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
    

}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

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

    // cout << "insertion function is running" << endl;
    // head = inserAtFirst(head, 99);

    // cout << "printing after insertion" << endl;
    // linkedListTraversal(head);

    // cout << "Insert in the index is running" << endl;
    // head = insertInIndex(head, 1, 1);
    // linkedListTraversal(head);

    // cout << endl
    //      << "Insert at the end of the linked list" << endl;
    // head = insertAtEnd(head, 100);
    // linkedListTraversal(head);

    cout << endl
         << "Insert After the node " << endl;
    head = insertAfterNode(head,third ,1000);
    linkedListTraversal(head);
    return 0;
}

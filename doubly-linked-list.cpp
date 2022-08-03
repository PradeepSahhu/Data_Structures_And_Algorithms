// Custom boilerplate: using configure user's snippet in the manage.
#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node * prev;
    struct Node * next;
};

void linkedlistTraversalBeginning(struct Node * head){
    struct Node * ptr = head;
    while(ptr != NULL){
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
}

void linkedlistTraversalLast(struct Node * fourth){
    struct Node * ptr = fourth;
    while(ptr != NULL){
        printf("%d \n", ptr->data);
        ptr = ptr->prev;
    }
}

int main(){

    struct Node * head = (struct Node *) malloc (sizeof(struct Node));
    struct Node * second = (struct Node *) malloc (sizeof(struct Node));
    struct Node * third = (struct Node *) malloc (sizeof(struct Node));
    struct Node * fourth = (struct Node *) malloc (sizeof(struct Node));

    // linking Doubly linked-list

    head->data = 10;
    head->prev = NULL;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = third;
    
    third->data = 30;
    third->prev = second;
    third->next = fourth;

    fourth->data = 40;
    fourth->prev = third;
    fourth->next = NULL;

    linkedlistTraversalBeginning(head);
    cout<<"*********************** From the back side ********************************"<<endl;
    linkedlistTraversalLast(fourth);

    return 0;

}
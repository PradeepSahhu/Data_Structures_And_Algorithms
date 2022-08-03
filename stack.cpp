// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
// #include <stdlib.h> //because we are using : malloc
using namespace std;

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1; // return 1 means true
    }
    else
    {
        return 0; // else 0 means return false
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

int main()
{
    // struct stack s;
    // s.size = 10;
    // s.top = -1;
    // s.arr = (int *) malloc (s.size * sizeof(int)); //array dynamic memory allocation.

    struct stack *s; // A pointer of stack
    s = (struct stack *) malloc (sizeof(struct stack));
    
    s->size = 6;
    
    s->top = -1;
    
    s->arr = (int *) malloc (s->size * sizeof(int)); // array dynamic memory allocation.
    
//pushing an Element manually
    // s->arr[0] = 7;
    // s->top++;
    // s->arr[1] = 8;
    // s->top++;
    // s->arr[2] = 8;
    // s->top++;
    // s->arr[3] = 8;
    // s->top++;
    // s->arr[4] = 8;
    // s->top++;
    // s->arr[5] = 8;
    // s->top++;

//Why this is also working?
    // s->arr[6] = 8;
    // s->top++;
    // s->arr[7] = 8;
    // s->top++;


    // check if stack is empty.
    if(isEmpty(s)){
        cout<<"The stack is Empty "<<endl;
    }
    else {
        cout<<"The stack is not Emtpy "<<endl;
    }

    if(isFull(s)){
        cout<<"Stack is full"<<endl;
    }
    else{
        cout<<"Stack is not full"<<endl;
    }
    return 0;
}
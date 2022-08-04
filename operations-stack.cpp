// Custom boilerplate: using configure user's snippet in the manage.
#include<iostream>
using namespace std;

struct stack {
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        return 1; // 1 means true
    }
    else {
        return 0;
    }
}
int isFull(struct stack *ptr){
    if(ptr->top == ptr->size -1){
        return 1; // 1 means true
    }
    else {
        return 0; // 0 means false
    }
}

void pushStack(struct stack * ptr, int value){
    if(isFull(ptr)){
        printf("The stack overflow! cannot push %d to the stack \n", value);
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int popStack(struct stack *ptr){
    if(isEmpty(ptr)){
        cout<<"The stack is Underflow! please push before pop"<<endl;
        return -1;
    }else{
        int value = ptr->arr[ptr->top];
        // ptr->arr[ptr->top] = []; // we can't make our array empty?
        ptr->top--;
        return value;
    }
}

int main(){

    struct stack *sp; //Structure pointer
    sp = (struct stack *) malloc (sizeof(struct stack));
    sp->size = 3;
    sp->top = -1;
    sp->arr = (int *) malloc (sp->size * sizeof(int));

    // *********************** Manually pushing into the array. ****************************
    // sp->arr[0] = 3;
    // sp->top++;

    // ***************** Performing push and pop operations on list.*********************

    pushStack(sp, 400);
    pushStack(sp, 10);
    pushStack(sp, 600); //---> only 3 pushed in the stack. at this point stack is full 
    pushStack(sp, 69); // Stack overflow since stack is full.

    // cout<<popStack(sp)<<" is popped out<<endl;
    // cout<<popStack(sp)<<" is popped out<<endl;
    // cout<<popStack(sp)<<" is popped out<<endl;
    // cout<<popStack(sp)<<" is popped out<<endl; // The stack is empty at this point so no other element will be popped out.

    // ******************************** checking if the stack is empty and full or not. ********************
    if(isEmpty(sp)){
        cout<<"The Stack is Empty"<<endl;
    }else{
        cout<<"The stack is not Empty"<<endl;
    }

    if(isFull(sp)){
        cout<<"The stack is full"<<endl;
    }else{
        cout<<"The stack is not Full"<<endl;
    }

    

    return 0;
}
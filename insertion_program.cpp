// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
using namespace std;

void display(int arr[], int n)
{

    // Code for Traversal
    for (int i = 0; i < n; i+=1)
    {
        // cout<<": The value of I is: "<<i<<endl;
        printf("%d ", arr[i]);
        // printf("\n");
    }
    
};
int indInsertion(int arr[], int size, int element, int capacity, int index){
    //code for Insertion
    if(size>=capacity){
        return -1;
    }

    //Visualize it for clearity...
    /*for(int i = size-1; i>=index;i--){
        arr[i+1] = arr[i];
    }
    */

    for (int i = size; i >= index; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[index] = element;
    return 1;

}



int main()
{

    int arr[10] = {1, 2, 8, 15, 26};
    int size = 5, element = 45, index = 1;
    
    indInsertion(arr, size, element, 10, index);
    size+=1;

    display(arr, size);
    
//If insertion is successful then print display else don't
    // if (indInsertion){
    //     display(arr,size);
    // }
    // else {
    //     printf("Insertion failed!!!");
    // }
    
    
    

    return 0;
}
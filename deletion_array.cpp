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
void indDeletion(int arr[], int size,  int index){
    //code for Deletion
    //Visualization is the key to make it work...

    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }


}



int main()
{

    int arr[10] = {1, 2, 8, 15, 26};
    int size = 5, index = 0;
    display(arr, size);
    cout<<endl;
    indDeletion(arr, size,index);
    size-=1;

    display(arr, size);
    
//If Deletion is successful then print display else don't
    // if (indDeletion){
    //     display(arr,size);
    // }
    // else {
    //     printf("Deletion failed!!!");
    // }
    
    
    

    return 0;
}
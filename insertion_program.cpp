// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
using namespace std;

void display(int arr[], int n)
{

    //Traversal
    for (int i = 0; i < n; i+=1)
    {
        cout<<": The value of I is: "<<i<<endl;
        printf("%d", arr[i]);
        printf("\n");
    }
    
};

int main()
{

    int arr[100] = {1, 2, 8, 15, 26};
    display(arr, 5);

    return 0;
}
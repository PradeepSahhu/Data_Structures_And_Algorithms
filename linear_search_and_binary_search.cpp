// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
using namespace std;

//Linear Search...

int linearSearch(int arr[], int size, int element){

    for (int i = 0; i <= size; i++)
    {
        if(arr[i]==element){
            return i;
        } 
    }
    return -1;

    
};

int binarySearch(int arr[], int size, int element){


    int low, mid, high;
    low = 0;
    high = size-1;
    
    //Searching starts...
    while(low<=high)
    {
        mid = (low + high)/2;

        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] > element){
            high = mid-1;

        } else{
            low = mid+1;
        }
    };
    //Searching Ends;
    return -1;
}



int main()
{

    //*******Unsorted Array for linear search...*******

    // int arr[] = {1,3,4,5,6,7,8,9,10,11,12};
    // int element = 58;
    // int size = sizeof(arr)/sizeof(int);
    // int searchIndex = linearSearch(arr, size,element);
    // cout<<searchIndex<<endl;

    //******Sorted Array for Binary Search...***********
    int arr[] = {1,3,4,5,6,72,81,90,101,110,120};
    int element = 72;
    int size = sizeof(arr)/sizeof(int);
    int searchIndex = binarySearch(arr, size,element);
    cout<<searchIndex<<endl;

    return 0;
}
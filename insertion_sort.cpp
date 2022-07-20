// Custom boilerplate: using configure user's snippet in the manage.
// Video :
#include <iostream>
using namespace std;




int main()
{

    int arr[10] = {2, 4, 1, 3, 9, 12, 18, 11, 13, 15};

    //********************************************Ascending order...************************

    // for (int i = 1; i < 11; i++)
    // {
    //     int key = arr[i];
    //     // This is the main body of the incertion sort.
    //     int j = i - 1;
    //     while (j >= 0 && arr[j] > key)
    //     {
    //         arr[j+1] = arr[j];
    //         j = j - 1;
    //     }
    //     arr[j+1] = key;
    // }

    //****************************************Descending order...*********************************

    for (int i = 1; i < 10; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j>=0 && arr[j] < key){
            arr[j+1] = arr[j];
            j-=1;

        }
        arr[j+1] = key;
    }
    

    for (int k = 0;k<10;k++){
        cout <<arr[k]<<" ";
    }
    

    return 0;
}
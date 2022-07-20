// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
using namespace std;


int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a = 20;
    int temp = 0;
    cout << "Your number is: " << a << endl;

    // Don't write else statement ...
    for (int i = 0; i < 10; ++i)
    {
        if (arr[i] == a)
        {
            
            cout << "Number found, Index is: " << i << endl;
            temp = 1;
            break;
        }
        
    }
    if (temp == 0){
        cout<<"null";
    }

    
    return 0;
}
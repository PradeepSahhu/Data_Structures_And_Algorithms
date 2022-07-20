// Custom boilerplate: using configure user's snippet in the manage.
#include <iostream>
#include <stdlib.h>
using namespace std;

/* ***************************************************************************************** */
// Abstract DataType = Custom DataType with predefined representations(data) and operations(functions).
//  struct myArray
//  {
//      int data1;
//      int data2;

//     void set(int x, int y)
//     {
//         data1 = x;
//         data2 = y;
//     }
//     void get(void){
//         cout<<"The value of data1 is: "<<data1<<endl;
//         cout<<"The value of data2 is: "<<data2<<endl;
//     }
//     int add(){
//         return data1 + data2;
//     }
// };

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tSize, int uSize)
{

    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // (*a).ptr = (int *) malloc(tSize*sizeof(int));

    /*Using Arrow Operator which is save as above */

    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void show(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

void setVal(struct myArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter Element %d ", i+1);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}
int main()
{
    /* ************* For Array 1 ********** */
    // myArray number;
    // num90ber.set(2,3);
    // number.get();
    // int a = number.add();
    // cout<<a;

    struct myArray marks; // An instance of custom dataType myArray. like object in classes is also an instance of custom class DataType.
    createArray(&marks, 10, 5);
    printf("Running setVal \n");

    setVal(&marks); // passing address
    printf("Running Show \n");
    show(&marks); 

    return 0;
}
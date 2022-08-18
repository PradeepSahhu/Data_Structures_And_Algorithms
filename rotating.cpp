#include<iostream>
using namespace std;

int main(){

    int arr[] = {5,6,8,7,9,10};
    int temp[6] = {};
    int d = 2;
    int i = 0;
    int tempIndex = 0;
    int backup = 2;

    // for( int i = d; i< 6; i++){
    //     temp[tempIndex] = arr[i];
    //     tempIndex++;
    // }
    // for(int i = 0;i < d;i++){
    //     cout<<"The value of temp is : "<<i<<" ";
    //     temp[tempIndex] = arr[i];
    //     tempIndex++;

    // }

    for(tempIndex = 2; tempIndex < 6; tempIndex++){
        temp[i] = arr[tempIndex];
        i++;
    }
    for(int j = 0;j < 2;j++){
        temp[i] = arr[j]; 
        i++;
    }
    

    for(int i = 0;i<6;i++){
        cout<<temp[i]<<" ";
    }
    

    return 0;
}
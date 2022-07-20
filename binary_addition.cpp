// Custom boilerplate: using configure user's snippet in the manage.
#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int a[4] = {1,0,1,1};
    int b[4] = {0,0,1,1};
    int c[5] = {0,0,0,0,0};

    // for(int i=3;i>=0;i--){
        //OR
    for(int i=(n-1);i>=0;i--){
        int sum = a[i] + b[i] + c[i];
        c[i+1] = (sum % 2);
        // cout<<"-->"<<sum;
        c[i-1] = (sum / 2); // It takes carry to the next iteration.
    }
    cout<<endl;
    for(int j = 0;j<5;j++){
        cout<<c[j]<<"-- ";
    }

    return 0;
}
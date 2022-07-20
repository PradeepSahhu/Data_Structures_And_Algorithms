
#include<iostream>
#include<random>

using namespace std;

int random(int a){
    int i;
    int num = (rand() % (a+1));
    return num;
}
int function(int n)
{
    int i=0;
    cout<<"value of n is: "<<n<<endl;
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        i = random(n - 1);
        printf("this\n");
        cout<<"This is i: " <<i<<endl;
        return function(i) + function(n - 1 - i);
    }
}

// Custom boilerplate: using configure user's snippet in the manage.


int main(){

    
    function(6);
    return 0;
}
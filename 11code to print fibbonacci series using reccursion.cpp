// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// code to print fibbonacci series using reccursion
int fib (int n){
    if(n<=1){
        return n;
    }

    return(fib(n-1) + fib(n-2));
};

int main() {
    int n;
    cout<<"enter the number you want the fibbonacci of"<<endl;
    cin>>n;
    cout<<"the fibbonacci is "<<endl;
    cout<<fib(n);
   
    return 0;
}

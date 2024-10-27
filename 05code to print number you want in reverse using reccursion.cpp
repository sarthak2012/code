// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void print(int i ,int n){
    //code to print number you want in reverse using reccursion
    if (i<1){
    return; 
    // base condition
    }
    cout<<i<<endl;
    print(i-1,n); //reccursive call
}

int main() {
    int n;
    cout<<"enter the number you want in reverse"<<endl;
    cin>>n;
    cout<<"the number are"<<endl;
    print(n,n);
   
    return 0;
}

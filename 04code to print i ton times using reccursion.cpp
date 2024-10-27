// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void print(int i ,int n){
    //code to print i ton times using reccursion
    if (i>n){
    return; 
    // base condition
    }
    cout<<i<<endl;
    print(i+1,n); //reccursive call
}

int main() {
    int n;
    cout<<"enter the number of times you want to print the name"<<endl;
    cin>>n;
    cout<<"the number are"<<endl;
    print(1,n);
   
    return 0;
}

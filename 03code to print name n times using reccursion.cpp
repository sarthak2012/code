// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void print(int i ,int n){
    //code to print name n times using reccursion
    if (i>n){
    return; 
    // base condition
    }
    cout<<"raj"<<endl;
    print(i+1,n); //reccursive call
}

int main() {
    int n;
    cout<<"enter the number of times you want to print the name"<<endl;
    cin>>n;
    print(1,n);
   
    return 0;
}

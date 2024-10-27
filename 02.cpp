// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int count=0;
void print(){
    
    while(count==4){
    return; 
    // base condition
    }
    cout<<count<<endl;
    count++;
    print(); //reccursive call
}

int main() {
    print();
   
    return 0;
}

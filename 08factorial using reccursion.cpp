// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//reccurtion using functioanal method
int factorial (int n){
    if(n==0){
        return 1;
    }
     else if(n==1){
        return 1;
     }
    return(n* factorial(n-1));
};

int main() {
    int n;
    cout<<"enter the number you want the factorial of"<<endl;
    cin>>n;
    cout<<"the number are"<<endl;
    cout<<factorial(n);
   
    return 0;
}

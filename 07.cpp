// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//reccurtion using functioanal method
int sum (int n){
    if(n==0){
        return 0;
    }
    return(n+ sum(n-1));
};

int main() {
    int n;
    cout<<"enter the number you want the sum of"<<endl;
    cin>>n;
    cout<<"the number are"<<endl;
    cout<<sum(n);
   
    return 0;
}

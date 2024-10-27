// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int sum;
void print(int i ,int sum){
    //code to print sum of n numbers using reccursion
    if (i<1){
        cout<<sum;
        return; 
    // base condition
    }
        print(i-1,sum+i); 
        // i ko reduce kro , sum mae add kro i 
        //reccursive call

}

int main() {
    int n;
    cout<<"enter the number you want in reverse"<<endl;
    cin>>n;
    cout<<"the number are"<<endl;
    print(n,0);
   
    return 0;
}

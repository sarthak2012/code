// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//code to check if pallendrome using reccursion
//pallandrome is if reversing is also same
// code to reverse
bool f(int i , string &s){
    if (i>=s.size()/2) return true;
    if(s[i]!=s.size()-i-1) return false;
    f(i+1,s);}

int main() {
    string s = "madam";
    if (f(0, s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}

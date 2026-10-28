#include <iostream>

using namespace std;

bool isEven(long long n) {
    return (n%2==0);
}

int main() {
    long long n;
    cin >> n;
    
    // base case
    if (n == 1) { 
        cout << 1 << "\n";
        return 0;
    }
    
    // first number
    cout << n << "\n";
    
    // rest of the sequence
    while (n!=1) {
        if (isEven(n)) n /= 2; 
        else n = 3*n + 1;  
        cout << n << "\n";    
    }
    
    return 0;
}
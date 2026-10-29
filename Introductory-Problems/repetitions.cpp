#include <bits/stdc++.h>

using namespace std;

int main() {
    string c;
    cin >> c;
    
    int max = 1; 
    int acc = 0;
    int length = c.length();
    char previousChar = c[0];
    
    for (int i=0; i<length; i++) {
        if (previousChar != c[i]) {
            max = (max>=acc) ? max: acc;
            acc = 0;
            previousChar=c[i];
        }
        acc++;
    }
    
    max = (max>=acc) ? max: acc;
    
    cout << max << "\n";
    return 0;
}

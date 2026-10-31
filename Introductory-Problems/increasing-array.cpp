#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long moves=0;
    int prevNumber; cin >> prevNumber;
    for (int i = 0; i<n-1; i++) {
        int j; cin >> j;
        if (prevNumber > j) {
            moves = moves + prevNumber - j;
        }
        else if (prevNumber < j) {
            prevNumber = j;
        }
    }
    
    cout << moves << "\n";
    return 0;
}

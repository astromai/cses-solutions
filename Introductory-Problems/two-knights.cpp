#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using uint = unsigned int;

ll combination(int n, int k) {
    if (k < 0 || k > n) return 0;
    if (k == 0 || k == n) return 1;
    
    if (k > n - k) {
        k = n - k;
    }
    
    long long res = 1;
    for (int i = 1; i <= k; ++i) {
        res = res * (n - i + 1) / i;
    }
    
    return res;
}

ll sn(int n) {

    if (n==1) {
        return 0;
    }
    
    else if (n==2) {
        return 6;
    }
    
    else if (n==3) {
        return 28;
    }

    else {
        ll sol = combination(n*n, 2) - 2 * (combination(n-1,1)*(n-2) + combination(n-2,1)*(n-1));
        return sol;
    }
     
} 

int main() {
    int n; cin >> n;
    
    for (int j=1; j<=n; j++) {
      cout << sn(j) << "\n";    
    }
    
    return 0; 
}

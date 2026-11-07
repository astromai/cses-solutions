#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using uint = unsigned int;

int main() {
    int t; cin >> t;
    
    for (int i=0; i<t; i++) {
        ll y, x; cin >> y >> x;
        ll mx = max(y,x);
        ll mn = min(y,x);
        ll result;

        if (mx == mn) {
            result = mx * mx - (mx-1);
        }
        
        else if (y<x) {
            // odd w
            if (x%2) {
                result = mx * mx - (mn-1);
            }
            else {
                result = (mx-1)*(mx-1) + mn;
            }
        }
        
        else if (y>x) {
            // odd
            if (y%2) {
                result = (mx-1)*(mx-1) + mn;
            }
            else {
                result = mx*mx - (mn-1);
            }
        }

        cout << result << '\n';
    }
    
    return 0;
}

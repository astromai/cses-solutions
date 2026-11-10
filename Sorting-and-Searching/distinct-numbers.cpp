#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using uint = unsigned int;

int main() {
    int n; cin >> n;
    set<ll> table;
    
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        table.insert(x);
    }
    cout << table.size() << "\n";
    return 0;
}

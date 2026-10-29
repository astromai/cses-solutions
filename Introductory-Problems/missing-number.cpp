#include <iostream>
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll n; cin >> n;    
    
    vector<ll> nums(n-1);
    
    // fill vector
    for (ll &x : nums) {
        cin >> x;
    }
    
    ll sum = 0;
    for (int i=0; i<=n; i++) {
        sum += i;
    } 
    for (int i=0; i<n-1; i++) {
        sum -= nums[i];
    }  
    
    cout << sum << "\n";
    
    return 0;
}

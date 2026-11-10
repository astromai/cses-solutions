#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using uint = unsigned int;

int main() {
    int n, m, k; cin >> n >> m >> k;
    
    vector<int> applicants;
    vector<int> apartments;
    
    // O(n)
    for (int i=0; i<n; i++) {
        int a; cin >> a;
        applicants.push_back(a);        
    }
    
    // O(m)
    for (int i=0; i<m; i++) {
        int b; cin >> b;
        apartments.push_back(b);        
    }    
    
    // sort O(log n) 
    sort(applicants.begin(), applicants.end(), greater<int>());
    // sort O(log m)
    sort(apartments.begin(), apartments.end(), greater<int>());
    
    // stack
    stack<int> stApplicants;
    stack<int> stApartments;
    for (int x: applicants) {
        stApplicants.push(x);
    }
    for (int x: apartments) {
        stApartments.push(x);
    }
    
    int cnt=0;
    while(!stApplicants.empty() ) {
        
        if (stApartments.empty()) {
            break;
        }
    
        else if( stApplicants.top() >= (stApartments.top() - k) && stApplicants.top() <= (stApartments.top() + k)  ) {
            cnt++;
            stApplicants.pop();
            stApartments.pop();
        }
        
        else if (stApplicants.top() < (stApartments.top() - k)) {
            stApplicants.pop();
        }
        
        else {
            stApartments.pop(); 
        }
    }
    
    cout << cnt << "\n";
    
    return 0;
}

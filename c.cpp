#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// C.

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(auto &x : a)  
        cin >> x;

    b = a;
    
    sort(a.begin(), a.end());

    int mx1 = a[n-1];
    int mx2 = a[n-2];

    for(auto x : b) {
        if(x != mx1)
            cout << x - mx1 << " ";
        else 
            cout << x - mx2 << " ";
    }
    cout << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// A.  

void solve() {
    vector<int> a(3);
    for(auto &x : a) {
        cin >> x;
    }
    
    sort(a.begin(), a.end());
    cout << a[1] << "\n";

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

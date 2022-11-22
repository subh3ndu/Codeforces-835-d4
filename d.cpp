#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// D. Challenging Valley

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a)
        cin >> x;
    bool found_dec = false, found_inc = false;
    bool ans = true;

    for(int i = 1; i < n; i++) {
        if(a[i] < a[i - 1]) {
            found_dec = true;
            ans = ans && !found_inc;
        } else if(a[i] > a[i - 1])
            found_inc = true;
    }
    cout << (ans ? "YES" : "NO") << "\n";
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

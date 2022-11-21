#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// B.

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int mx = -1;
    for(auto x : s) {
        mx = max(x - 'a', mx);
    }

    cout << mx + 1 << "\n";
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

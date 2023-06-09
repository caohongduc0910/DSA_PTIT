#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) a[i] = i + 1;
        string s = "";
        for (int i = 0; i < n; i++) {
            s += to_string(a[i]);
        }
        vector <string> v;
        v.pb(s);
        while (next_permutation(a, a + n)) {
            string s = "";
            for (int i = 0; i < n; i++) {
                s += to_string(a[i]);
            }
            v.pb(s);
        }
        for (int i = v.size() - 1; i >= 0; i--) cout << v[i] << ' ';
        cout << endl;
    }
    return 0;
}
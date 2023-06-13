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
        vector <string> v;;
        int n; cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        while (n) {
            string s = "[";
            for (int i = 0; i < n; i++) {
                if (i != n - 1) s += to_string(a[i]) + " ";
                else s += to_string(a[i]);
            }
            s += "]";
            v.pb(s);
            for (int i = 0; i < n - 1; i++) {
                a[i] = a[i] + a[i + 1];
            }
            n--;
        }
        for (int i = v.size() - 1; i >= 0; i--) {
            cout << v[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}
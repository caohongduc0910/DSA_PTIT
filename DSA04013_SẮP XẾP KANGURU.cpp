#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        sort(a, a + n);
        int ans = n, l = n / 2 - 1, r = n - 1;
        while (l >= 0) {
            if (a[r] >= 2 * a[l]) {
                l--; r--;
                ans--;
            }
            else l--;
        }
        cout << ans << endl;
    }
    return 0;
}
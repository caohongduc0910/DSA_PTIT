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
        int a[n], b[n];
        for (int i = 0; i < n; i++) a[i] = i + 1;
        for (int i = 0; i < n; i++) cin >> b[i];

        vector <vector <int>> v;
        vector <int> temp;

        // Day het cau hinh vao vector
        for (int i = 0; i < n; i++) {
            temp.pb(a[i]);
        }
        v.pb(temp);
        while (next_permutation(a, a + n)) {
            temp.clear();
            for (int i = 0; i < n; i++) {
                temp.pb(a[i]);
            }
            v.pb(temp);
        }

        //So sanh cac cau hinh trong vector va mang da cho
        for (int i = 0; i < v.size(); i++) {
            bool ok = true;
            for (int j = 0; j < n; j++) {
                if (v[i][j] != b[j]) {
                    ok = false;
                    break;
                }
            }
            if (ok == true) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
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
        int q; string s;
        cin >> q >> s;
        cout << q << ' ';
        if (next_permutation(s.begin(), s.end()))
            cout << s;
        else cout << "BIGGEST";
        cout << endl;
    }
    return 0;
}
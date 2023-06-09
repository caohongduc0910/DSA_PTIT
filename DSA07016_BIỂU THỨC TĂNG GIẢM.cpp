#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(string s) {
    stack <int> st;
    for (int i = 1; i <= s.size() + 1; i++) {
        st.push(i);
        if (i == s.size() + 1 || s[i-1] == 'I') {
            while (!st.empty()) {
                cout << st.top();
                st.pop();
            }
        }
    }
}

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        solve(s);
        cout << endl;
    }
    return 0;
}
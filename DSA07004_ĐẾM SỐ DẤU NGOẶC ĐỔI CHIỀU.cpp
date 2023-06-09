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
        string s; cin >> s;
        stack <char> st;
        for (int i = 0; i < s.size(); i++) {
            if (st.empty()) {
                st.push(s[i]);
            }
            else {
                if (s[i] == '(') st.push(s[i]);
                else {
                    char top = st.top();
                    if (top == '(') st.pop();
                    else st.push(s[i]);
                }
            }
        }
        vector <char> v;
        while (!st.empty()) {
            v.pb(st.top());
            st.pop();
        }
        int cnt = 0;
        reverse(begin(v), end(v));
        for (int i = 0; i < v.size(); i++) {
            if (i % 2 == 1 && v[i] == '(')
                cnt++;
            if (i % 2 == 0 && v[i] == ')')
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
    fast_io;
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string s; getline(cin, s);
        stack <char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '[' || s[i] == ']' || s[i] == '(' || s[i] == ')') {
                if (!st.empty()) {
                    if (s[i] == ']' && st.top() == '[') st.pop();
                    else if (s[i] == ')' && st.top() == '(') st.pop();
                    else st.push(s[i]);
                }
                else st.push(s[i]);
            }
        }
        if (!st.empty()) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}
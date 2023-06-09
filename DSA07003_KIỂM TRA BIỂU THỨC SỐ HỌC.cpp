#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool check(string s) {
    stack <char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ')') st.push(s[i]);
        else {
            char top = st.top();
            if (top == '(') return false;
            else {
                st.pop();
                top = st.top();
                if (top == '(') return false;
                else {
                    while (top != '(') {
                        st.pop();
                        top = st.top();
                    }
                    st.pop();
                }
            }
        }
    }
    return true;
}

int main() {
    fast_io;
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string s; getline(cin, s);
        if (check(s)) cout << "No";
        else cout << "Yes";
        cout << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//CHO 1 BIỂU THỨC HẬU TỐ HOẶC TIỀN TỐ. TÍNH GIÁ TRỊ

int n;
string s[1001];

void tiento() {
    stack <ll> st;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] != "+" && s[i] != "-" && s[i] != "*" && s[i] != "/") {
            st.push(stoll(s[i]));
        }
        else {
            ll t1 = st.top(); st.pop();
            ll t2 = st.top(); st.pop();
            if (s[i] == "+") st.push(t1 + t2);
            if (s[i] == "-") st.push(t1 - t2);
            if (s[i] == "*") st.push(t1 * t2);
            if (s[i] == "/") st.push(t1 / t2);
        }
    }
    cout << st.top() << endl;
}

void hauto() {
    stack <ll> st;
    for (int i = 0; i < n; i++) {
        if (s[i] != "+" && s[i] != "-" && s[i] != "*" && s[i] != "/") {
            st.push(stoll(s[i]));
        }
        else {
            ll t1 = st.top(); st.pop();
            ll t2 = st.top(); st.pop();
            if (s[i] == "+") st.push(t1 + t2);
            if (s[i] == "-") st.push(t2 - t1);
            if (s[i] == "*") st.push(t1 * t2);
            if (s[i] == "/") st.push(t2 / t1);
        }
    }
    cout << st.top() << endl;
}

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        if (s[0] != "+" && s[0] != "-" && s[0] != "*" && s[0] != "/") {
            hauto();
        }
        else tiento();
    }
    return 0;
}

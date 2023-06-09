#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void sinh(string &s) {
    int i = s.size() - 1;
    while (s[i] == '1' && i >= 0) {
        s[i] = '0';
        i--;
    }
    if(i != -1) {
        s[i]  = '1';
    }
}

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        sinh(s);
        cout << s << endl;
    }
    return 0;
}
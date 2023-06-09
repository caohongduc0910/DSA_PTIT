#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

string s;

void sinh() {
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '0') {
        s[i] = '1';
        i--;
    }
    if (i == -1) {
        cout << s << endl;
    }
    else {
        s[i] = '0';
        cout << s << endl;
    }
}

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        cin >> s;
        sinh();
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void Try(char i, char c, int n, string s) {
    for (char j = i; j <= c; j++) {
        s += j;
        if (s.size() == n) cout << s << endl;
        else Try(j, c, n, s);
        s.pop_back();
    }
}

int main() {
    fast_io;
    char c;
    int n;
    cin >> c >> n;
    Try('A', c, n, "");
    return 0;
}
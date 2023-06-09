#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve(int n, char a, char b, char c) {
    if (n == 1)
        cout << a << " -> " << c << endl;
    else {
        solve(n - 1, a, c, b);
        solve(1, a, b, c);
        solve(n - 1, b, a, c);
    }
}

int main() {
    fast_io;
    int n; cin >> n;
    solve(n, 'A', 'B', 'C');
}
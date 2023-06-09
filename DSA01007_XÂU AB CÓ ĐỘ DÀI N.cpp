#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n;
int a[11];
bool ok;

void khoitao() {
    for (int i = 1; i <= n; i++)
        a[i] = 0;
}

void sinh() {
    int i = n;
    while (i > 0 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i == 0) ok = false;
    else a[i] = 1;
}

void xuat() {
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) cout << 'A';
        else cout << 'B';
    }
    cout << ' ';
}

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        ok = true;
        cin >> n;
        khoitao();
        while (ok) {
            xuat();
            sinh();
        }
        cout << endl;
    }
    return 0;
}
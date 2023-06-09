#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int a[20];
int n;
bool ok = true;

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

bool check() {
    if (a[1] == 0) return false;
    if (a[n] == 1) return false;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 1 && a[i + 1] == 1)
            return false;
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) {
            cnt++;
            if (cnt > 3) return false;
        }
        else cnt = 0;
    }
    return true;
}

void xuat() {
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) cout << 6;
        else cout << 8;
    }
    cout << endl;
}

int main() {
    fast_io;
    cin >> n;
    khoitao();
    while (ok) {
        if (check()) {
            xuat();
        }
        sinh();
    }
    return 0;
}
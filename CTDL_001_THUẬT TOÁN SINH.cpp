#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int n;
int a[10001];
bool ok = true;

void khoitao() {
    for (int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}

void sinh() {
    int i = n;
    while (a[i] == 1 && i > 0) {
        a[i] = 0;
        i--;
    }
    if (i == 0) ok = false;
    else a[i] = 1;
}

bool check() {
    for (int i = 1; i <= n / 2; i++) {
        if (a[i] != a[n - i + 1])
            return false;
    }
    return true;
}

void xuat() {
    for (int i = 1; i <= n; i++) cout << a[i] << ' ';
    cout << endl;
}

int main() {
    fast_io;
    cin >> n;
    khoitao();
    while (ok) {
        if (check()) xuat();
        sinh();
    }
    return 0;
}
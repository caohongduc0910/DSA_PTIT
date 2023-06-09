#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int n, k;
int a[10001];
int x[10001];
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
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i])
            sum += x[i];
    }
    return sum == k;
}

void xuat() {
    for (int i = 1; i <= n; i++) {
        if (a[i]) cout << x[i] << ' ';
    }
    cout << endl;
}

int main() {
    fast_io;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> x[i];
    khoitao();
    int cnt = 0;
    while (ok) {
        if (check()) {
            cnt++;
            xuat();
        }
        sinh();
    }
    cout << cnt;
    return 0;
}
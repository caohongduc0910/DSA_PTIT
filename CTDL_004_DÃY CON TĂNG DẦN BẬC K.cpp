#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n, k;
int x[1001], a[1001];
bool ok = true;

void khoitao() {
    for (int i = 1; i <= k; i++) a[i] = i;
}

void sinh() {
    int i = k;
    while (i > 0 && a[i] == n - k + i)
        i--;
    if (i == 0) ok = false;
    else {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
    }
}

bool check() {
    for (int i = 1; i < k; i++) {
        if (x[a[i]] > x[a[i + 1]]) return false;
    }
    return true;
}

int main() {
    fast_io;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> x[i];
    int cnt = 0;
    khoitao();
    while (ok) {
        if (check()) cnt++;
        sinh();
    }
    cout << cnt;
    return 0;
}
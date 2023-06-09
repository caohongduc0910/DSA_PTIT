#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n, k;
int a[20];
bool ok;

void khoitao() {
    for (int i = 1; i <= k; i++)
        a[i] = i;
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

void xuat() {
    for (int i = 1; i <= k; i++)
        cout << a[i];
    cout << ' ';
}

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        ok = true;
        cin >> n >> k;
        khoitao();
        while(ok){
            xuat();
            sinh();
        }
        cout << endl;
    }
    return 0;
}
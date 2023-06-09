#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n, k;
int a[1001];

void sinh() {
    int i = k;
    while (i > 0 && a[i] == n - k + i) {
        i--;
    }
    if (i == 0) {
        for (int i = 1; i <= k; i++) cout << i << ' ';
        cout << endl;
    }
    else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
        for (int i = 1; i <= k; i++) cout << a[i] << ' ';
        cout << endl;
    }
}

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 1; i <= k; i++) cin >> a[i];
        sinh();
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n, k;
int a[50];
bool ok;

void sinh() {
    int i = k;
    while (i > 0 && a[i] == n - k + i) {
        i--;
    }
    if (i == 0) ok = false;
    else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        ok = true;
        cin >> n >> k;
        set <int> se;
        for (int i = 1; i <= k; i++) {
            cin >> a[i];
            se.insert(a[i]);
        }
        sinh();
        if (!ok) cout << k;
        else {
            int cnt = 0;
            for (int i = 1; i <= k; i++) {
                if (se.find(a[i]) == se.end())
                    cnt++;
            }
            cout << cnt;
        }
        cout << endl;
    }
    return 0;
}
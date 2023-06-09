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
    for (int i = 1; i <= k; i++) {
        a[i] = i;
    }
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

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        ok = true;
        cin >> n >> k;
        int b[k + 1];
        for (int i = 0; i < k; i++) cin >> b[i];

        vector <vector <int>> v;
        vector <int> temp;

        // Day het cau hinh vao vector
        khoitao();
        while (ok) {
            temp.clear();
            for (int i = 1; i <= k; i++) {
                temp.pb(a[i]);
            }
            v.pb(temp);
            sinh();
        }

        //So sanh cac cau hinh trong vector va mang da cho
        for (int i = 0; i < v.size(); i++) {
            bool ok = true;
            for (int j = 0; j < k; j++) {
                if (v[i][j] != b[j]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
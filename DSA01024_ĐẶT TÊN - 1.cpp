#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n, k, len;
bool ok = true;
int a[50];

void khoitao() {
    for (int i = 1; i <= k; i++) {
        a[i] = i;
    }
}

void sinh() {
    int i = k;
    while (i > 0 && a[i] == len - k + i) {
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
    cin >> n >> k;

    //Nhap mang va cho cac phan tu khong trung nhau vao vector roi sap xep
    set <string> se;
    vector <string> v;
    string b[n];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (se.find(b[i]) == se.end()) {
            v.pb(b[i]);
        }
        se.insert(b[i]);
    }
    sort(v.begin(), v.end());

    //Sinh to hop cac cau hinh trong vector
    len = v.size();
    khoitao();
    vector <string> ans;
    string s;
    while (ok) {
        s = "";
        for (int i = 1; i <= k; i++) {
            s += v[a[i] - 1] + " ";
        }
        s.pop_back();
        ans.pb(s);
        sinh();
    }
    sort(ans.begin(), ans.end());
    for (string x : ans) cout << x << endl;
    return 0;
}
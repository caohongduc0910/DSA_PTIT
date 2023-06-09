#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    fast_io;
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k; cin >> k;
    for (int  i = 0; i < n; i++)
        if (a[i] != k)
            cout << a[i] << ' ';
    return 0;
}
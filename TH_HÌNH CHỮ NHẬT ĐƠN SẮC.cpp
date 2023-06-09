#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll solve(vector <ll> a, int n) {
    stack <ll> st;
    ll res = LLONG_MIN;
    ll k = 0;
    while (k < n) {
        if (st.empty() || a[k] >= a[st.top()]) {
            st.push(k);
            k++;
        }
        else {
            ll index = st.top();
            st.pop();
            if (st.empty())
                res = max(res, k * a[index]);
            else
                res = max(res, a[index] * (k - st.top() - 1));
        }
    }
    while (!st.empty()) {
        ll index = st.top();
        st.pop();
        if (st.empty())
            res = max(res, k * a[index]);
        else
            res = max(res, a[index] * (k - st.top() - 1));
    }
    return res;
}

int main() {
    fast_io;
    ll n, m; cin >> m >> n;
    vector <ll> a(n), b(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) b[i] = m - a[n - i - 1];
    reverse(begin(b), end(b));
    ll ans = max(solve(a, n), solve(b, n));
    cout << ans;
    return 0;
}
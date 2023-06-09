#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    fast_io;
    ll n, k; cin >> n >> k;
    ll cnt = 0;
    ll a[n];
    priority_queue<ll, vector <ll>, greater<ll>> q;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        q.push(a[i]);
    }
    ll t = k;
    while (q.size() > 1) {
        ll maxx = LLONG_MIN;
        ll minn = LLONG_MAX;
        if (q.size() >= k) {
            ll sum = 0;
            while (t--) {
                if (maxx < q.top()) maxx = q.top();
                if (minn > q.top()) minn = q.top();
                sum += q.top();
                q.pop();
            }
            q.push(sum);
            cnt += maxx - minn;;
            t = k;
        }
        else {
            ll sum = 0;
            t = q.size();
            while (t--) {
                if (maxx < q.top()) maxx = q.top();
                if (minn > q.top()) minn = q.top();
                sum += q.top();
                q.pop();
            }
            q.push(sum);
            cnt += maxx - minn;
        }
    }
    cout << q.top() << endl << cnt;
    return 0;
}
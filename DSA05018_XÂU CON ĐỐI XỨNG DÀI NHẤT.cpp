#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        size_t n = s.size();
        s = "x" + s;
        bool F[n + 1][n + 1];
        memset(F, false, sizeof(F));

        for (int i = 1; i <= n; i++) F[i][i] = true;
        int ans = INT_MIN;

        for (int len = 2; len <= n; len++) {
            for (int i = 1; i <= n - len + 1; i++) {
                int j = i + len - 1;
                if (len == 2 && s[i] == s[j])
                    F[i][j] = true;
                else
                    F[i][j] = F[i + 1][j - 1] && (s[i] == s[j]);

                if (F[i][j])
                    ans = max(ans, len);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
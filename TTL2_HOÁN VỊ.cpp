#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// Cho hai số N và M. Sẽ có tất cả N! 
// hoán vị của N số tự nhiên đầu tiên, được đánh số từ 1 đến N!.
// Hãy liệt kê các hoán vị của N số tự nhiên 
// đầu tiên và có thứ tự là bội số của M.
// Input
// 4 3
// Output
// 1 3 2 4
// 1 4 3 2
// 2 3 1 4
// 2 4 3 1
// 3 2 1 4
// 3 4 2 1
// 4 2 1 3
// 4 3 2 1

int main() {
    fast_io;
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) a[i] = i + 1;
    int cnt = 0;
    do {
        cnt++;
        if (cnt % m == 0) {
            for (int i = 0; i < n; i++) {
                cout << a[i] << ' ';
            }
            cout << endl;
        }
    } while (next_permutation(a, a + n));
    return 0;
}
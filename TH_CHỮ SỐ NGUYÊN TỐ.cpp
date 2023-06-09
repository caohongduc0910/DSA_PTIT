#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool check(string s) {
    if (s[s.size() - 1] % 2 == 0) return false;
    set <char> se;
    for (int i = 0; i < s.size(); i++) {
        se.insert(s[i]);
    }
    if (se.size() != 4) return false;
    return true;
}

int main() {
    fast_io;
    int n; cin >> n;
    queue <string> q;
    q.push("2");
    q.push("3");
    q.push("5");
    q.push("7");
    vector <string> v;
    while (q.front().size() <= n-1) {
        string temp = q.front(); q.pop();
        string t1 = temp + "2"; q.push(t1);
        if (check(t1)) v.pb(t1);
        string t2 = temp + "3"; q.push(t2);
        if (check(t2)) v.pb(t2);
        string t3 = temp + "5"; q.push(t3);
        if (check(t3)) v.pb(t3);
        string t4 = temp + "7"; q.push(t4);
        if (check(t4)) v.pb(t4);
    }
    for(string s : v) cout << s << endl;
    return 0;
}
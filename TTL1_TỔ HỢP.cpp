#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//Cho xâu ký tự S có N chữ số thập phân. 
//Hãy liệt kê các số khác nhau có K chữ số lấy từ K 
//vị trí khác nhau trong xâu S theo thứ tự từ nhỏ đến lớn.
//OUTPUT
//2
//1234 2
//4444 2
//INPUT
// 12
// 13
// 14
// 23
// 24
// 34
// 44

set <string> se;
int k;
string s;

void Try(string temp, int i) {
    for (int j = i; j < s.size(); j++) {
        temp += s[j];
        if (temp.size() == k) se.insert(temp);
        else Try(temp, j + 1);
        temp.pop_back();
    }
}

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        se.clear();
        cin >> s >> k;
        Try("", 0);
        for (auto x : se) cout << x << endl;
    }
    return 0;
}

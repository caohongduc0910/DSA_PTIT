#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

string solve(string s) {
	stack <char> st;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ')')
			st.push(s[i]);
		else {
			string temp = "";
			while (st.top() != '(') {
				temp = st.top() + temp;
				st.pop();
			}
			st.pop();
			if (!st.empty() && st.top() == '-') {
				for (auto &x : temp) {
					if (x == '+') x = '-';
					else if (x == '-') x = '+';
				}
				for (auto x : temp)
					st.push(x);
			}
			else {
				for (auto x : temp)
					st.push(x);
			}
		}
	}
	string ans = "";
	while (!st.empty()) {
		ans = st.top() + ans;
		st.pop();
	}
	return ans;
}

int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		string s1, s2; cin >> s1 >> s2;
		string temp1 = solve(s1);
		string temp2 = solve(s2);
		if (temp1 == temp2) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}


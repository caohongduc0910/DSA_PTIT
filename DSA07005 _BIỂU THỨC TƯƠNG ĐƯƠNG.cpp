#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {                      //  a-(b-c-(d+e))-f
		string s; cin >> s;
		stack <char> st;
		s = "+" + s;
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
				if (st.top() == '-') {
					for (auto &x : temp) {
						if (x == '+') x = '-';
						else if (x == '-') x = '+';
					}
					for (auto x : temp) {
						st.push(x);
					}
				}
				else {
					for (auto x : temp) {
						st.push(x);
					}
				}
			}
		}
		string ans = "";
		while (!st.empty()) {
			ans = st.top() + ans;
			st.pop();
		}
		ans.erase(0, 1);
		cout << ans << endl;
	}
	return 0;
}





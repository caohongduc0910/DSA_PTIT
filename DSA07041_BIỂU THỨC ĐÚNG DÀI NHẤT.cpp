#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
	fast_io;
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack <char> st;
		for(int i = 0; i<s.size(); i++){
			if(s[i] == '(') st.push(s[i]);
			else{
				if(!st.empty() && st.top() == '(')
					st.pop();
				else st.push(s[i]);
			}
		}
		cout << s.size() - st.size() << endl;
	}
	return 0;
}





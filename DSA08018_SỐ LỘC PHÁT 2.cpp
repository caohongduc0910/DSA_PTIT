#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
	fast_io;
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		queue <ll> q;
		vector <ll> v;
		q.push(6); q.push(8);
		v.pb(6); v.pb(8);
		ll maxx = pow(10, n - 1);
		while(q.front() < maxx){
			ll s1 = q.front() * 10 + 6;
			ll s2 = q.front() * 10 + 8;
			q.pop();
			q.push(s1); q.push(s2);
			v.pb(s1); v.pb(s2);
		} 
		cout << v.size() << endl;
		for(int i = 0; i < v.size(); i++){
			cout << v[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}

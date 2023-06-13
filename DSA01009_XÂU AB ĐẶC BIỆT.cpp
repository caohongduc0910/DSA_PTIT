#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;

int n, k;
int a[101];
bool ok = true;
vector <string> v;

void khoitao(){
	for(int i = 1; i <= n; i++)
		a[i] = 0;
}

void sinh(){
	int i = n;
	while(i > 0 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = false;
	else a[i] = 1;
}

bool check(){
	int c1 = 0, c2 = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == 0) {
			c1++;
			if(c1 == k) c2++;
			if(c1 > k) return false;
		}
		else c1 = 0;
	}
	if(c2 > 1) return false;
	return c2 == 1;
}

void in(){
	string s = "";
	for(int i = 1; i<=n; i++){
		if(a[i] == 0) s += "A";
		else s += "B";
	}
	v.pb(s);
}

int main(){
	cin >> n >> k;
	int cnt = 0;
	khoitao();
	while(ok){
		if(check()) {
			cnt++;
			in();
		}
		sinh();
	}
	cout << cnt << endl;
	for(string s : v) cout << s << endl;
	return 0;
}

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
    	int n, k; cin >> n >> k;
    	int a[1001];
    	for(int i = 1; i <= k; i++)
    		cin >> a[i];
    	//bool ok = true;
    	int i = k;
    	while(i > 0 && a[i-1] + 1 == a[i]) 
			i--;
    	if(i == 1){
    		for(int j = n - k + 1; j <= n; j++)
    			cout << j << ' ';
    		cout << endl;
		}
		else{
			a[i]--;
			for(int j = i+1; j <= n; j++) a[j] = n - k + j;
			for(int i = 1; i <= k; i++)
    			cout << a[i] << ' ';
    		cout << endl;
		}
	}
    return 0;
}

#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n],b[n];
		for(int &x : a) cin >> x;
		for(int &x : b) cin >> x;
		bool one = false, valid = true, mone = 0;
		for(int i = 0; i < n; i++){
			if(b[i] > a[i] && !one) valid = false;
			if(b[i] < a[i] && !mone) valid = false;
			one |= a[i] == 1;
			mone |= a[i] == -1;
		}
		if(valid) cout << "YES\n";
		else cout << "NO\n";
	}
}

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll r; cin >> r;
		ll ans = 0;
		if(r >= n){
			ll x = n-1;
			ans = n*x/2;
			ans++;
		}
		else{
			ans = r*(r+1)/2;
		}
		cout << ans << "\n";
	}
}

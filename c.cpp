#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	ll n,m,k;
	cin >> n >> m >> k;
	ll a[n],b[m], pref[n+1] = {0}, ano[m+1] = {0};
	for(ll &i : a) cin >> i;
	for(ll &i : b) cin >> i;
	for(ll i = 0; i < n; i++) pref[i+1] = pref[i]+a[i];
	for(ll i = 0; i < m; i++) ano[i+1] = ano[i]+b[i];
	ll ans = 0;
	for(ll i = 0; i <= n; i++){
		if(k < pref[i]) continue;
		ll left = k-pref[i];
		ll l = 1, r = m;
		ll cnt = 0;
		while(l <= r){
			ll mid = l+(r-l)/2;
			if(left >= ano[mid]){
				cnt = mid;
				l = mid+1;
			}
			else r = mid-1;
		}
		ans = max(ans, cnt+i);
	}
	cout << ans;
}

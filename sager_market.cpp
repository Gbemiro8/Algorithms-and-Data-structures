#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main()
{
	ll n,S;
	cin >> n >> S;
	ll arr[n];
	for(ll &x : arr) cin >> x;
	pair<ll,ll> ans = {0,0};
	int l = 0, r = n;
	while(l <= r){
		int mid = l+(r-l)/2;
		ll tmp[n];
		for(int i = 0; i < n; i++){
			tmp[i] = 1ll*mid*(i+1)+arr[i];
		}
		sort(tmp, tmp+n);
		ll sum = 0;
		for(int i = 0; i < mid; i++) sum += tmp[i];
		if(sum <= S){
			if(mid == ans.first) ans.second = min(ans.second, sum);
			if(mid > ans.first){
				ans.first = mid;
				ans.second = sum;
			}
			l = mid+1;
		}else r = mid-1;
	}
	cout << ans.first << " " << ans.second << "\n";
}

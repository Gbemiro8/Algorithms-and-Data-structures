#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	int t; cin >> t;
	while(t--){
		ll n,k;
		cin >> n >> k;
		vector<ll> arr(n);
		for(int i = 0;i < n; i++){
			ll x; cin >> x;
			arr[i] = x%k;
		}
		for(ll i = 0; i < n; i++){
			if(arr[i] == 0) continue;
			arr[i] = k-arr[i];
		}
		sort(arr.begin(), arr.end());
		ll cur = -1; bool first = 1; ll mm = 0;
		for(int i = 0; i < n; i++){
			if(arr[i] == 0) continue;
			if(first){
				cur = arr[i];
				first = 0;
				continue;
			}
			if(arr[i-1] == arr[i]){
				cur += k;
			}
			else{
				mm = max(cur, mm);
				cur = arr[i];
			}
		}
		mm = max(cur, mm);
		if(mm) cout << mm+1 << "\n";
		else cout << 0 << "\n";
	}
}

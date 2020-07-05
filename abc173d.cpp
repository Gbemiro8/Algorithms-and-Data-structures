#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	int n; cin >> n;
	vector<ll> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr.rbegin(), arr.rend());
	ll ans = 0;
	int k = n-2;
	ans += arr[0];
	for(int i = 1; i < n && k; i++){
		if(k == 1){
			ans += arr[i];
			k--;
		}else{
			ans += arr[i]*2;
			k -= 2;
		}
	}
	cout << ans;
}

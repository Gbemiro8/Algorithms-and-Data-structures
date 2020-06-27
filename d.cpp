#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	ll n; cin >> n;
	vector<int> arr(n+1);
	for(ll i = 1; i <= n; i++){
		for(ll j = i; j <= n; j+= i){
			arr[j]++;
		}
	}
	ll ans = 0;
	for(ll i = 1; i <= n; i++){
		ans += i*arr[i];
	}
	cout << ans;
}

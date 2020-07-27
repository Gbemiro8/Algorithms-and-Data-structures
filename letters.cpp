#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	int n,m;
	cin >> n >> m;
	ll arr[n+1], b[m];
	arr[0] = 0;
	for(int i = 1; i < n+1; i++) cin >> arr[i];
	for(ll &x : b) cin >> x;
	for(int i = 1; i <= n; i++) arr[i] += arr[i-1];
	for(ll x : b){
		int pos = lower_bound(arr, arr+n+1, x)-arr;
		cout << pos << " " << x-arr[pos-1] << "\n";
	}
}

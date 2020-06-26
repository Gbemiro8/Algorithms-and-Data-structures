#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int arr[n];
		vector<int> want(k);
		for(int i = 0; i < n; i++) cin >> arr[i];
		for(int i = 0; i < k; i++) cin >> want[i];
		sort(arr, arr+n);
		sort(want.begin(), want.end(), greater<int>());
		ll ans = 0;
		int l = 0, r = n-1;
		for(int i = k-1; ~i && want[i] == 1; i--){
			ans += arr[r]*2;
			r--;
			want.pop_back();
		}
		for(int i = 0; i < want.size(); i++){
			ans += arr[l]+arr[r];
			r--;
			l += want[i]-1;
		}
		cout << ans << "\n";
	}
}

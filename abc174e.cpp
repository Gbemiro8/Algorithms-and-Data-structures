#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int ans = -1, l = 1, r = (int)1e9+7;
	auto possible = [&](int x){
		int cnt = 0;
		for(int len : arr){
			cnt += (len-1)/x;
		}
		return cnt <= k;
	};
	while(l <= r){
		int mid = l+(r-l)/2;
		if(possible(mid)){
			ans = mid;
			r = mid-1;
		}
		else l = mid+1;
	}
	cout << ans;
}

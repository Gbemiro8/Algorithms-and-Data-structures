#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t; cin >> t;
	while(t--){
		int n,k,p;
		cin >> n >> p >> k;
		int arr[n];
		for(int i= 0; i < n; i++) cin >> arr[i];
		sort(arr, arr+n);
		int ans = 0;
		for(int i = 0; i < n; i++){
			if(i == k-1){
				if(arr[i] <= p) ans = max(ans, i+1);
				continue;
			}
			if(i < k && i > 0){
				arr[i] += arr[i-1];
			}else if(i > 0){
				arr[i] += arr[i-k];	
			}
			if(arr[i] <= p) ans = max(ans, i+1);
		}
		cout << ans << "\n";
	}
}

#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n, k; cin >> n >> k;
	int arr[n];
	for(int &x : arr) cin >> x;
	vector<int> dp(n);
	for(int i = 0; i < n; i++) dp[i] = INT_MAX;
	dp[0] = 0;
	for(int i = 0; i < n; i++){
		for(int j = 1; j <= k; j++){
			if(i-j >= 0){
				dp[i] = min(dp[i], dp[i-j]+abs(arr[i]-arr[i-j]));
			}
		}
	}
	cout << dp[n-1];
}

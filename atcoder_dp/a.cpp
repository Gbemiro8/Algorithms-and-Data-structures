#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n; cin >> n;
	int arr[n];
	for(auto &i : arr) cin >> i;
	int dp[n];
	for(int i = 0; i < n; i++) dp[i] = 0;
	for(int i = 1; i < n; i++){
		int x = INT_MAX, y = INT_MAX;
		if(i >= 1) x = dp[i-1]+abs(arr[i]-arr[i-1]);
		if(i >= 2) y = dp[i-2]+abs(arr[i]-arr[i-2]);
		dp[i] = min(x,y);
	}
	cout << dp[n-1];
}

#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t; cin >> t;
	while(t--){
		int n,x; cin >> n >> x;
		int arr[n];
		for(int &mm : arr) cin >> mm;
		sort(arr, arr+n, greater<int>());
		int cur = 1;
		int ans = 0;
		for(int i = 0; i < n; i++){
			if(1LL*cur*arr[i] >= x){
				ans++;
				cur = 0;
			}
			cur++;
		}
		cout << ans << endl;
	}
}

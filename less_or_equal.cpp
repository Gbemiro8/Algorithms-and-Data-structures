#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n,k,ans;
	cin >> n >> k;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr.begin(), arr.end());
	if(k == 0) ans = arr[0]-1;
	else ans = arr[k-1];
	int cnt = 0;
	for(int x : arr) cnt += x <= ans;
	if(cnt != k || ans < 1 || ans > (int)1e9) ans = -1;
	cout << ans;
}

#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n; cin >> n;
	vector<vector<int>> arr(n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			int x; cin >> x;
			arr[i].push_back(x);
		}
	}
	int ans = -1;
	for(int i = 1; i < n; i++){
		for(int j = 0; j < arr[i].size(); j++){
			int x = 0;
			if(j > 0) x = arr[i-1][j-1];
			arr[i][j] = max(arr[i-1][j],x)+arr[i][j];
			ans = max(ans, arr[i][j]);
		}
	}
	cout << ans;
}

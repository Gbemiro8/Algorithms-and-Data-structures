#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> arr(n+1), b(n+1);
		for(int i = 1; i <= n; i++){
			cin >> arr[i];
			if(arr[i] == i) b[i] = 1;
		}
		int ans = 0, k = 1, en = n;
		while(arr[k] == k && k <= n) k++;
		while(arr[en] == en && en > 0) en--;
		if(k > en){
			cout << "0\n";
			continue;
		}
		bool found = 0;
		for(int i = k; i <= en; i++){
			if(b[i]){
				found = 1;
			}
		}
		if(found) ans = 2;
		else ans = 1;
		cout << ans << "\n";
	}
}

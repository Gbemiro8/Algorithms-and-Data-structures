#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int arr[n];
		ll sum = 0;
		for(int &x : arr){ cin >> x; sum += x;}
		
		ll best = LLONG_MIN, maxsofar = 0, best2 = LLONG_MIN;
		for(int i = 0; i < n-1; i++){
			maxsofar += arr[i];
			best = max(best, maxsofar);
			maxsofar = max(maxsofar, 0ll);
		}
		maxsofar = 0;
		for(int i = 1; i < n; i++){
			maxsofar += arr[i];
			best2 = max(best2, maxsofar);
			maxsofar = max(maxsofar, 0ll);
		}
		if(sum > best && sum > best2) cout << "YES\n";
		else cout << "NO\n";
	}
}

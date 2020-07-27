#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n; cin >> n;
	int arr[n]; for(int &x : arr) cin >> x;
	int best = INT_MAX;
	for(int dx : {-1, 0, 1}){
		for(int dy : {-1, 0, 1}){
			int fi = arr[0]+dx, sc = arr[1]+dy;
			int diff = sc-fi, ans = abs(dx)+abs(dy);
			bool nn = 1;
			for(int i = 2; i < n; i++){
				int x = fi+i*diff;
				if(abs(arr[i]-x) > 1) nn = 0;
				if(x != arr[i]) ans++;
			}
			if(nn) best = min(ans, best);
		}
	}
	if(best == INT_MAX) best = -1;
	cout << best;
}

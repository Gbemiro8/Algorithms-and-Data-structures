#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n; cin >> n;
	int ans = 0;
	for(int i = 1; i <= n; i++){
		int x; cin >> x;
		if(i&1 && x&1) ans++;
	}
	cout << ans;
}

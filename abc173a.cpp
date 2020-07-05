#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n; cin >> n;
	int ans = 0;
	if(n%1000 == 0) ans = 0;
	else{
		int x = n/1000+1;
		ans = x*1000-n;
	}
	cout << ans;
}

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(n&1) cout << n/2+1 << "\n";
		else cout << n/2 << "\n";
	}
}

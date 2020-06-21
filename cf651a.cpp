#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		/*int ans = 1;
		for(int i = 2; i <= n; i++){
			for(int j = 2*i; j <= n; j += i){
				ans = max(ans, i);
			}
		}
		cout << ans << "\n";*/
		cout << n/2 << "\n";
	}
}

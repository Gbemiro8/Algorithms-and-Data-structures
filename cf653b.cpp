#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		//map<ll,bool> vis;
		int ans = 0;
		bool found = 0;
		auto chk = [&](int x){
			return !(x&(x-1));
		};
		while(n > 1){
			if(n%6==0){
				n /= 6;
			}else if(!chk(n)){
				n *= 2;
			}
			else{
				found = 1;
				break;
			}
			ans++;
		}
		if(found) ans = -1;
		cout << ans << "\n";
	}
}

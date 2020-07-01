#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
int main()
{
	int t; cin >> t;
	while(t--){
		ll a,b,n,m;
		cin >> a >> b >> n >> m;
		if(m > min(a,b)){
			cout << "No\n";
		}else{
			ll res = max(a,b)+min(a,b)-m;
			if(res >= n) cout << "Yes\n";
			else cout << "No\n";
		}
	}
}

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	ll n;
	cin >> n;
	ll sum = 0;
	map<ll,int> m;
	for(int i = 0; i < n; i++){
		ll x; cin >> x;
		m[x]++;
		sum += x;
	}
	int q; cin >> q;
	for(int i = 0; i < q; i++){
		ll a,b;
		cin >> a >> b;
		ll rem = 0;
		if(m[a]) rem = m[a];
		m[a] = 0;
		m[b] += rem;
		sum -= rem*a;
		sum += rem*b;
		//for(auto it : m){cout << it.first << " " << it.second << "\n";}
		cout << sum << "\n";
	}
}

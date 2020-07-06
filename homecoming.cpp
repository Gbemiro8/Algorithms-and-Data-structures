#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	int t; cin >> t;
	while(t--){
		ll a,b,p;
		cin >> a >> b >> p;
		string s; cin >> s;
		vector<ll> dp(s.size());
		if(s[0] == 'A') dp[0] = a;
		else dp[0] = b;
		for(int i = 1; i < s.size()-1; i++){
			if(s[i] != s[i-1]){
				int tmp;
				if(s[i] == 'A') tmp = a;
				else tmp = b;
				dp[i] = dp[i-1]+tmp;
			}
			else dp[i] = dp[i-1];
		}
		dp[s.size()-1] = dp[s.size()-2];
		ll mon = dp[s.size()-1];
		int ans;
		if(p >= mon){
			cout << "1\n";
			continue;
		}
		bool found = 0;
		for(int i = 1; i < s.size(); i++){
			if(s[i] != s[i-1]){
				if(p >= mon-dp[i-1]){
					ans = i+1;
					found = 1;
					break;
				}
			}
		}
		if(!found) ans = s.size();
		cout << ans << "\n";
	}
}

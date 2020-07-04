#include<bits/stdc++.h>

using namespace std;


int main()
{
	string s,t; cin >> s >> t;
	vector<vector<int>> dp(s.size()+1, vector<int>(t.size()+1));

	for(int i = 1; i <= (int)s.size(); i++){
		for(int j = 1; j <= (int)t.size(); j++){
			if(s[i-1] == t[j-1]){
				dp[i][j] = dp[i-1][j-1]+1;
			}else{
				if(dp[i-1][j] > dp[i][j-1]){
					dp[i][j] = dp[i-1][j];
				}else{
					dp[i][j] = dp[i][j-1];
				}
			}
		}
	}
	string ans = "";
	int i = s.size(), j = t.size();
	while(i > 0 && j > 0){
		if(s[i-1] == t[j-1]){
			ans += s[i-1];
			i--; j--;
		}
		else if(dp[i-1][j] > dp[i][j-1]){
			i--;
		}else j--;
	}
	reverse(ans.begin(), ans.end());
	cout << ans;
}

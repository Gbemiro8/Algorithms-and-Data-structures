#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		string ans = "";
		bool found = 0;
		string lead = "";
		int k = 0;
		while(s[k] == '0'){
			lead += s[k++];
		}
		for(int i = n-1; ~i; i--){
			if(s[i] == '0'){
				bool valid = 0;
				for(int j = i-1; j >= 0; j--){
					valid |= s[j] == '1';
				}
				if(valid){
					found = 1;
					ans += s[i];
					ans += lead;
					reverse(ans.begin(), ans.end());
					cout << ans << "\n";
					break;
				}
				else{
					found = 1;
					cout << s << "\n";
					break;
				}
			}
			ans += s[i];
		}
		if(!found) cout << ans << "\n";
	}
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a,b,c;
		cin >> a >> b >> c;
		string s; cin >> s;
		int cntp =0, cntr =0, cnts = 0;
		for(int x : s){
			if(x == 'R') cntr++;
			if(x == 'S') cnts++;
			if(x == 'P') cntp++;
		}
		int mm = min(cntr, b)+min(cntp, c)+min(cnts, a);
		if(mm < (int)((n+1)/2)){cout << "NO\n"; continue;}
		cout << "YES\n";
		string ans = "";
		for(int i = 0; i < (int)s.size(); i++) ans += 'x';
		for(int i = 0; i < (int)s.size(); i++){
			if(s[i] == 'R' && b){
				ans[i] = 'P'; b--;
			}
			else if(s[i] == 'P' && c){
				ans[i] = 'S'; c--;
			}
			else if(s[i] == 'S' && a){
				ans[i] = 'R'; a--;
			}
		}
		for(char &x : ans){
			if(x == 'x'){
				if(a){x = 'R'; a--; continue;}
				if(b){x = 'P'; b--; continue;}
				if(c){x = 'S'; c--; continue;}
			}
		}
		cout << ans << "\n";
	}
}

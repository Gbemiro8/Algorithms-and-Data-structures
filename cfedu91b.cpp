#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map<char,int> m;
		for(char x : s) m[x]++;
		char x; int cnt = 0;
		for(auto it : m){
			if(it.second > cnt){
				x = it.first;
				cnt = it.second;
			}
		}
		string ans = "";
		if(x == 'R') x = 'P';
		else if(x == 'S') x = 'R';
		else x = 'S';
		for(int i = 0; i < (int)s.size(); i++){
			ans += x;
		}
		cout << ans << endl;
	}
}

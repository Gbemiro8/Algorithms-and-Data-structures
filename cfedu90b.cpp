#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<char> st;
		int cnt = 0;
		for(int i = 0; i < s.size(); i++){
			if(st.size() && st.top() != s[i]){
				st.pop();
				cnt++;
				continue;
			}
			st.push(s[i]);
		}
		if(cnt&1) cout << "DA\n";
		else cout << "NET\n";
	}
}

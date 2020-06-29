#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		stack<char> st;
		for(int i = 0; i < n; i++){
			if(st.size() && st.top() == '(' && s[i] == ')'){ st.pop(); continue;}
			else st.push(s[i]);
		}
		cout << st.size()/2 << "\n";
	}
}

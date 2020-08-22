#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n; cin >> n;
	string s; cin >> s;
	string tmp = s;
	sort(s.begin(), s.end());
	int ans = 0;
	for(int i = 0; i < (int)s.size(); i++){
		ans += tmp[i] != s[i];
	}
	cout << (ans+1)/2;
}

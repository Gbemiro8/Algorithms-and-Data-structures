#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n; 
	string s;
	cin >> n >> s;
	map<string,int> m;
	for(int i = 0; i < n-1; i++){
		string tmp = "";
		tmp += s[i];
		tmp += s[i+1];
		m[tmp]++;
	}
	string ans;
	int count = 0;
	for(auto it : m){
		if(it.second > count){
			ans = it.first;
			count = it.second;
		}
	}
	cout << ans;
}

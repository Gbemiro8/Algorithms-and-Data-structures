#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		vector<int> ans;
		map<int,int> m;
		for(string k : {"twone", "two", "one"}){
			for(int i = 0; i < (int)s.size()-(int)k.size()+1; i++){
				if(s.substr(i, (int)k.size()) == k){
					if(m[i]) continue;
					ans.push_back(i+k.size()/2);
					if(k == "twone"){
						for(int j = 0; j < k.size(); j++){
							m[i+j] = 1;
						}
					}
				}
			}
		}
		cout << ans.size() << "\n";
		for(int x : ans) cout << x+1 << " ";
		cout << "\n";
	}
}

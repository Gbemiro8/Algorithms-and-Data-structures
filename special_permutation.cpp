#include<bits/stdc++.h>

using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(n < 4){
			cout << "-1\n";
			continue;
		}
		vector<int> odd, even;
		for(int i = 1; i <= n; i++){
			if(i == 4 || i == 2) continue;
			if(i&1) odd.push_back(i);
			else even.push_back(i);
		}
		reverse(odd.begin(), odd.end());
		for(int x : odd) cout << x << " ";
		cout << "4 2 ";
		for(int x : even) cout << x << " ";
		cout << "\n";
	}
}

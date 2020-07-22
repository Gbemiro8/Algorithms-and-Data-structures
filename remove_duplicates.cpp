#include<bits/stdc++.h>

using namespace std;


int main()
{
		int n; cin >> n;
		int arr[n];
		for(int &x : arr) cin >> x;
		map<int,int> seen;
		vector<int> ans;
		for(int i =n-1; ~i; i--){
			if(seen[arr[i]]) continue;
			ans.push_back(arr[i]);
			seen[arr[i]] = 1;
		}
		cout << ans.size() << endl;
		for(int i = ans.size()-1; ~i; i--){
			cout << ans[i] << " ";
		}
		cout << "\n";
}

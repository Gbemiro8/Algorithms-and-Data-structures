#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int arr[n];
		for(int &x : arr) cin >> x;
		vector<vector<int>> a[n];
		for(int i = 0; i < n; i++){
			vector<int> tmp;
			for(int j = 1+i; j < n; j++){
				if(arr[j] < arr[i]){
					tmp.push_back(j);
				}
			}
			a[i].push_back(tmp);
			tmp.clear();
			for(int j = 0; j < i; j++){
				if(arr[j] < arr[i])
					tmp.push_back(j);
			}
			a[i].push_back(tmp);
		}
		bool found = 0;
		for(int i = 0; i < n; i++){
			if(a[i].size() >= 2 && a[i][0].size() && a[i][1].size()){
				cout << "YES\n";
				cout << a[i][1][0]+1 << " " << i+1 << " " << a[i][0][0]+1 << endl;
				found = 1;
				break;
			}
		}
		if(found) continue;
		cout << "NO\n";
	}
}

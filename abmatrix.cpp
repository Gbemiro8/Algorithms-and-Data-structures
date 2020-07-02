#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t; cin >> t;
	while(t--){
		int n,m,a,b;
		cin >> n >> m >> a >> b;
		if(n*a != m*b){
			cout << "NO\n";
			continue;
		}
		vector<vector<int>> arr(n, vector<int>(m));
		int st = 0;
		for(int i = 0; i < n; i++){
			//int k = st;
			for(int k = 0; k < a; k++){
				arr[i][st++%m] = 1;
			}
		}
		cout << "YES\n";
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << arr[i][j];
			}
			cout << "\n";
		}
	}
}

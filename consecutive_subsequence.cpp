#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n; cin >> n;
	int arr[n]; for(int &x : arr) cin >> x;
	map<int,int> m;
	int ans = 0, last;
	for(int i = 0; i < n; i++){
		int tmp = arr[i];
		m[tmp] = m[tmp-1]+1;
		if(ans < m[tmp]){
			ans = m[tmp];
			last = tmp;
		}
	}
	vector<int> ano;
	for(int i = n-1; ~i; i--){
		if(arr[i] == last){
			ano.push_back(i+1);
			last--;
		}
	}
	reverse(ano.begin(), ano.end());
	cout << ans << endl;
	for(int x : ano) cout << x << " ";
}

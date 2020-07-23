#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	int n; cin >> n;
	int arr[n+1];
	for(int i = 1; i <= n; i++) cin >> arr[i];
	vector<set<pair<ll,int>>> ded(n+1);
	ded[0].insert({-1,-1});
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			ll tmp = arr[i]*abs(i-j);
			ded[i].insert(make_pair(tmp,j));
		}
	}
	ll ans = 0;
	auto comp = [&](set<pair<ll,int>> A, set<pair<ll,int>> B){
		auto it1 = A.end(), it2 = B.end();
		it1--; it2--;
		pair<ll,int> k1 = *it1, k2 = *it2;
		return k1.first > k2.first;
	};
	sort(ded.begin(), ded.end(), comp);
	map<int,int> taken;
	for(int i = 0; i< n; i++){
		auto it = ded[i].end();
		it--;
		pair<ll,int> tmp = *it;
		while(taken[tmp.second]){
			it--;
			tmp = *it;
		}
		ans += tmp.first;
		taken[tmp.second] = 1;
	}
	cout << ans;
}

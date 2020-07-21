#include<bits/stdc++.h>

using namespace std;
string s;
int solve(int l, int r, char ch){
	if(l == r){
		if(s[l] == ch) return 0;
		else return 1;
	}
	int mid = (l+r)/2;
	int sc1 = 0, sc2 = 0;
	for(int i = l; i <= mid; i++){
		sc1 += s[i] != ch;
	}
	for(int i = mid+1; i <= r; i++) sc2 += s[i] != ch;
	int x = sc1+solve(mid+1, r, ch+1);
	int y = sc2+solve(l, mid, ch+1);
	return min(x,y);
}
int main()
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cin >> s;
		cout << solve(0, n-1, 'a') << "\n";
	}
}

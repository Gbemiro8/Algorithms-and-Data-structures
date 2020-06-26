#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll; 
int main()
{
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		ll ans = 0;
		int cur = 0;
		int arr[s.size()];
		if(s[0] == '-') arr[0] = -1;
		else arr[0] = 1;
		for(int i = 1; i < s.size(); i++){
			if(s[i] == '+') arr[i] = arr[i-1]+1;
			else arr[i] = arr[i-1]-1;
		}
		for(int i = 0; i < s.size(); i++){
			if(cur+arr[i] < 0){
				ans += i+1;
				cur++;
			}
		}
		ans += s.size();
		cout << ans << "\n";
	}
}

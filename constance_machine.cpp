#include<bits/stdc++.h>

using namespace std;


int main()
{
	string s; cin >> s;
	int cnt = 0;
	for(char x : s){
		if(x == 'm' || x == 'w'){
			cout << "0";
			return 0;
		}
	}
	vector<int> arr;
	for(int i = 1; i < (int)s.size(); i++){
		if(s[i] == 'n' && s[i-1] == 'n'){
			cnt++;
		}
		else if(s[i] == 'u' && s[i-1] == 'u'){
			cnt++;
		}
		else if(s[i-1] == 'n' || s[i-1] == 'u'){
			arr.push_back(cnt+1);
			cnt = 0;
		}
	}
	if(cnt > 0) arr.push_back(cnt+1);
	const int mx = (int)1e5+7, mod = (int)1e9+7;
	vector<int> fib;
	fib.push_back(1);
	fib.push_back(1);
	for(int i = 2; i < mx; i++){
		fib.push_back(fib[i-1]%mod+fib[i-2]%mod);
	}
	long long ans = 1;
	for(int x : arr){
		ans = ans*fib[x]%mod;
	}
	cout << ans;
}

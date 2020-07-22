#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	int k,l = 0; cin >> k;
	ll x = 1;
	auto sol = [&](ll x){
		int sum = 0;
		while(x){
			sum += x%10;
			x /= 10;
		}
		return sum == 10;
	};
	for(;; x++){
		if(sol(x)){
			l++;
		}
		if(l == k){
			cout << x;
			return 0;
		}
	}
}

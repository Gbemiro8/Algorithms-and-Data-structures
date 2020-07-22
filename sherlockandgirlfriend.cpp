#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n; cin >> n;
	vector<int> sieve(n+3);
	for(int i = 2; i <= n+1; i++){
		if(sieve[i]) continue;
		for(int j = 2*i; j <= n+1; j += i){
			sieve[j] = 1;
		}
	}
	if(n <= 2){
		cout << "1\n";
	}
	else cout << "2\n";
	for(int i = 2; i <= n+1; i++){
		if(sieve[i]) cout << "2 ";
		else cout << "1 ";
	}
}

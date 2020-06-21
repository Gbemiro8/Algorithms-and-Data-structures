#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	ll n; cin >> n;
	string s = "",k = "abcdefghijklmnopqrstuvwxyz";
	while(n){
		n--;
		int pos = n%26;
		n /= 26;
		s += k[pos];
	}
	reverse(s.begin(), s.end());
	cout << s;
}

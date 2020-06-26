#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main() {
	int t;
	cin >> t;
	while(t--) {
		ll a, b, c;
		cin >> a >> b >> c;
		if(c<=a)
			cout << "-1 ";
		else
			cout << "1 ";
		if(c<a*b)
			cout << b;
		else
			cout << -1;
		cout << "\n";
	}
}

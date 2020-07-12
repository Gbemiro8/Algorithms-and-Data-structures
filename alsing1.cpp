#include<bits/stdc++.h>

using namespace std;


int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	/*a = a/c;
	b = b/c;
	cout << b-a+(c==1);*/
	int ans = 0;
	for(int i = a; i <= b; i++) ans += i%c == 0;
	cout << ans;
}

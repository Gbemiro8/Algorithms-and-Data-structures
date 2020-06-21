#include<bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
	int t; cin >> t;
	while(t--){
		auto chk = [&](int x){
			return !(x&(x-1));	
		};
		int n; cin >> n;
		int cnt = 0;
		while(n > 1){
			if(n&1) n = 1;
			else{
				if(chk(n)){n--;}
				else{
					int x = n;
					while(x&1^1){
						x /= 2;
					}
					//cout << "x = "<< x << "\n"; 
					if(x > 1)n /= x;
				}
			}
			//cout << "n = " << n << "\n";
			cnt++;
		}
		if(cnt&1^1) cout << "FastestFinger\n";
		else cout << "Ashishgup\n";
	}
}

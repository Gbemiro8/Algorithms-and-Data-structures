#include<bits/stdc++.h>

using namespace std;


int main()
{
	int ans = 0;
	for(int x = 0; x <= 151; x++){
		bool found = 0;
		for(int a = 0; a <= 8; a++){
			if(x-20*a >= 0 && (x-20*a)%9 == 0) found = 1;
		}
		if(!found){cout << x << "\n"; ans++;}
	}
	cout << ans;
}

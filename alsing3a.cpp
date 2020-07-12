#include<bits/stdc++.h>

using namespace std;


int main()
{
	freopen("c.cpp", "w", stdout);
	int n = 10000;
	for(int i = 1; i <= n; i++){
		int cnt = 0;
		for(int x = 1; x*x <= i; x++){
			for(int y = 1; y*y <= i; y++){
				for(int z = 1; z*z <= i; z++){
					long long tmp = 1LL*x*x+1LL*y*y+1LL*z*z+1LL*x*y+1LL*y*z+1LL*x*z;
					if(tmp == i) cnt++;
				}
			}
		}
		cout << "	sol[" << i << "] = " << cnt << ";"<< endl;
	}
}

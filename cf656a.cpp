#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t; cin >> t;
	while(t--){
		int x,y,z;
		cin >> x >> y >> z;
		int a,b,c;
		bool found = 0;
		for(int i : {x,y,z}){
			for(int j : {x,y,z}){
				for(int k : {x,y,z}){
					a = i; b = j; c = k;
					if(x == max(a,b) && y == max(a,c) && z == max(b,c)){
						found =1;
						break;
					}
				}
				if(found) break;
			}
			if(found) break;
		}
		if(found){
			cout << "YES\n";
			cout << a << " " << b<< " " << c<< " " << endl;
		}
		else cout << "NO\n";
	}
}

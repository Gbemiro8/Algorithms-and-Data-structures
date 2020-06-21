#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> odd, even;
		for(int i= 1; i <= 2*n; i++){
			int x; cin >> x;
			if(x&1) odd.push_back(i);
			else even.push_back(i);
		}
		if(odd.size()&1 && even.size()&1){
			odd.pop_back();
			even.pop_back();
		}	
		else{
			if(odd.size() > even.size()){
				odd.pop_back();
				odd.pop_back();
			}
			else{
				even.pop_back();
				even.pop_back();
			}
		}
		for(int i = 0; i < odd.size()/2; i++){
			cout << odd[i] << " " << odd[odd.size()-i-1] << "\n";
		}
		for(int i= 0; i < even.size()/2; i++){
			cout << even[i] << " " << even[even.size()-i-1] << "\n";
		}
	}
}

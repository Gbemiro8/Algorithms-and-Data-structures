#include<bits/stdc++.h>

using namespace std;          

int cache[1001][1001];
vector<int> arr = {2,4,6,2,5};

int solve(int l,int r, int y){          
	if(l == r) return arr[l]*y;
	if(l > r) return 0;
	if(cache[l][r]) return cache[l][r];          
	int& temp = cache[l][r];

	temp = max(y*arr[l]+solve(l+1,r,y+1), y*arr[r]+solve(l,r-1,y+1));
	return temp;          
}
          
int main()
{
	int n = 5;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cache[i][j] = 0;
		}
	}
	for(int i = 0; i < n; i++) cache[i][i] = arr[i];
	cout << solve(0,n-1,1);
	/*	
	for(int l = n-1; ~l; l--){          
		for(int r = l; r < n; r++){          
			int y = l+n-r;
			cache[l][r] = max(y*arr[l]+cache[l+1][r],y*arr[r]+cache[l][r-1]);
		}          
	}                              
	cout << cache[0][n-1];*/          
	                              
}

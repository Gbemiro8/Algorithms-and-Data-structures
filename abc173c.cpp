#include<bits/stdc++.h>

using namespace std;


int main()
{
	int h,w,k;
	cin >> h >> w >> k;
	vector<string> arr(h);
	for(int i = 0; i < h; i++) cin >> arr[i];
	int ans = 0;
	for(int i = 0; i < (1<<h); i++){
		for(int j = 0; j < (1<<w); j++){
			int cnt = 0;
			map<pair<int,int>,bool> chosen;
			for(int m = 0; m < h; m++){
				if(i&(1<<m)) continue;
				for(int col = 0; col < w; col++){
					if(j&(1<<col)) continue;
					if(chosen[{m,col}]) continue;
					if(arr[m][col] == '#'){
						cnt++;
					}
					chosen[{m,col}] = 1;
				}
			}
			/*for(int m = 0; m < w; m++){
				if(j&(1<<m)) continue;
				for(int row = 0; row < h; row++){
					if(chosen[{row,m}]) continue;
					if(arr[row][m] == '#'){
						cnt++;
					}
					chosen[{row,m}] = 1;
				}
			}*/
			ans += cnt == k;
		}
	}
	cout << ans;
}

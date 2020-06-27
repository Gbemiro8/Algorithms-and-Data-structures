#include<bits/stdc++.h>

using namespace std;

void solve(int n, int src, int dst, int tmp){
	if(n > 0){
		solve(n-1, src, tmp, dst);
		cout << "move " << src << "to " << dst << "\n";
		solve(n-1, tmp, dst, src);
	}
}
int main()
{
	int n = 3;
	solve(n,1,2,3);
}

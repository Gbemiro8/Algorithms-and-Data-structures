#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int arr[n];
		for(int &x : arr) cin >> x;
		int r = n-1;
		while(r-1 >= 0 && arr[r] <= arr[r-1]) r--;
		while(r-1 >= 0 && arr[r] >= arr[r-1]) r--;
		cout << r << endl;
	}
}

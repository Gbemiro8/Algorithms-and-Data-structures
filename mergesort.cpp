#include<bits/stdc++.h>

using namespace std;
vector<int> merge(vector<int> left, vector<int> right){
	vector<int> sorted;
	int l = 0, r = 0;
	while(l < left.size() && r < right.size()){
		if(left[l] < right[r]) sorted.push_back(left[l++]);
		else sorted.push_back(right[r++]);
	}
	while(l < left.size()) sorted.push_back(left[l++]);
	while(r < right.size()) sorted.push_back(right[r++]);
	return sorted;
}
void mergesort(vector<int> &arr, int n){
	if(n > 1){
		int mid = n/2;
		vector<int> left(arr.begin(), arr.begin()+mid);
		vector<int> right(arr.begin()+mid, arr.end());
		mergesort(left, mid);
		mergesort(right, n-mid);
		arr = merge(left, right);
	}
}
int main()
{
	int n; cin >> n;
	vector<int> arr(n); for(int &x : arr) cin >> x;
	mergesort(arr, n);
	for(int x : arr) cout << x << " ";
}

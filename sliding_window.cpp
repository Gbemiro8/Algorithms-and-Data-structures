#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n = 5, k = 2;
	int arr[n] = {-1, 3, 2, 5, 8}; // -1, 2, 2, 5
	deque<int> dq;
	for(int i = 0; i < n; i++){
		while(dq.size() && dq.front() <= i-k) dq.pop_front();
		while(dq.size() && arr[dq.back()] > arr[i]) dq.pop_back();
		dq.push_back(i);
		if(i-k+1 >= 0) cout << arr[dq.front()] << " ";
	}
}

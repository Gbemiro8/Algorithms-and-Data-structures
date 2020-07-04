#include<bits/stdc++.h>

using namespace std;
int n;
const int mx = 3001;
vector<double> p;
map<set<int>, bool> m; // or use a set of sets.
set<int> s;
double solve(double prod, int cnt, set<int> s){
	if(cnt >= n-cnt) return 0;
	double ans = 0;
	for(int i = 0; i < n; i++){
		if(s.find(i) != s.end()) continue;
		double tmp = prod/p[i]*(1-p[i]);
		s.insert(i);
		if(m[s]){
			s.erase(i);
			continue;
		}
		m[s] = 1;
		ans += tmp;
		ans += solve(tmp, cnt+1, s);
		s.erase(i);
	}
	return ans;
}
int main()
{
	cin >> n;
	for(int i = 0; i < n; i++){
		double x; cin >> x;
		p.push_back(x);
	}
	double prod = 1;
	for(int i = 0; i < n; i++) prod *= p[i];
	cout <<setprecision(12)<< solve(prod, 1, s)+prod;
}

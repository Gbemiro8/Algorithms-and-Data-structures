#include<bits/stdc++.h>

using namespace std;
int n;
const int mx = 3001;
vector<double> p;
map<set<int>, bool> m; // or use a set of sets.
double solve(double prod, set<int> s){
	if(m[s]){
		return 0;
	}
	m[s] = 1;
	if(s.size()+1 >= n-s.size()) return 0;
	double ans = 0;
	for(int i = 0; i < n; i++){
		if(s.find(i) != s.end()) continue;
		double tmp = prod/p[i]*(1-p[i]);
		s.insert(i);
		if(!m[s])ans += tmp;
		ans += solve(tmp, s);
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
	set<int> gg;
	cout <<setprecision(12)<< solve(prod, gg)+prod;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;



int main() {
	set<vector<int>> a;
	int n;
	cin>>n;
	rep(i,n){
		int m,x;
		cin>>m;
		vector<int> A;
		rep(j,m){
			cin>>x;
			A.push_back(x);
		}
		a.insert(A);
	}
	
	cout<<a.size()<<endl;
    return 0;
}

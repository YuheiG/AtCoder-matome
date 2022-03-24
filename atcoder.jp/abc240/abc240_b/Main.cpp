#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){

	set<int> test;

	int n,a;
	cin>>n;
	rep(i,n){
		cin>>a;
		a--;
		test.insert(a);
	}

	cout<<test.size()<<endl;
    return 0;
}
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
template<class T> using V = std::vector<T>;

using namespace std;
using Graph = vector<vector<int>>;

int main() {
	int n;
	cin>>n;
	vector<int> a;
	rep(i,n){
		int A;
		cin>>A;
		a.push_back(A);
	}

	int sum=0;
	rep(i,n){
		sum+=a.at(n-i-1);
		if(sum>3){
			cout<<n-i<<endl;
			return 0;
		}
	}
	cout<<0<<endl;
	
	return 0;
}


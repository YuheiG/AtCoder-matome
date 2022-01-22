#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int n;
	cin>>n;
	vector<int> A(n);
	rep(i,n)cin>>A.at(i);
	
	int ban_n=-1;
	rep(i,n-1){
		if(A.at(i)>A.at(i+1)){
			ban_n=A.at(i);
			break;
		}	
	}
	if(ban_n==-1){
		ban_n=A.at(n-1);
	}

	rep(i,n){
		if(A.at(i)==ban_n)continue;
		cout<<A.at(i)<<" ";
	}
	cout<<endl;

    return 0;
}
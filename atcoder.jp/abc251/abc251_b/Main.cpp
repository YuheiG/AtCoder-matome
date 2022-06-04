#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int n,w;
	cin>>n>>w;
	vector<int> a(n);
	vector<bool> goodnum(INT_MAX,false);
	rep(i,n)cin>>a.at(i);


	rep(i,n){
		goodnum.at(a.at(i))=true;
		rep(j,n){
			if(i==j)continue;
			goodnum.at(a.at(i)+a.at(j))=true;
			rep(k,n){
				if(i==k||j==k)continue;
				goodnum.at(a.at(i)+a.at(j)+a.at(k))=true;
			}
		}
	}

	int ans=0;
	for(int i=1;i<w+1;i++){
		if(goodnum.at(i))ans++;
	}

	cout<<ans<<endl;
	return 0;

}



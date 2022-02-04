#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){

	ll n,a,b,p,q,r,s;
	cin>>n>>a>>b>>p>>q>>r>>s;

	for(ll i=p;i<=q;i++){
		for(ll j=r;j<=s;j++){
			if(i==j+a-b||i==-j+a+b){
				cout<<"#";
			}else{
				cout<<".";
			}
		}
		cout<<endl;
	}

    return 0;
}
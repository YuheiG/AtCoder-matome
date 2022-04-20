#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){

	int n,m,k,s,t,x;
	cin>>n>>m>>k>>s>>t>>x;
	ll waru=998244353;


	s--;t--;x--;
	Graph G(n);
    rep(i,m){
        int a,b;
        cin>>a>>b;
        a--;b--;
        G.at(a).push_back(b);
        G.at(b).push_back(a);
    }

   	ll dp[k+1][n][2];
   	//cout<<"come"<<endl;
	
	rep(i,k+1){
		rep(j,n){
			dp[i][j][0]=0;
			dp[i][j][1]=0;
		}
	}

	dp[0][s][0]=1;

	rep(i,k){
		rep(j,n){
			for(int nv:G.at(j)){
				if(nv==x){
					dp[i+1][nv][0]+=dp[i][j][1];
					dp[i+1][nv][1]+=dp[i][j][0];

				}else{
					dp[i+1][nv][0]+=dp[i][j][0];
					dp[i+1][nv][1]+=dp[i][j][1];

				}
				dp[i+1][nv][0]%=waru;
				dp[i+1][nv][1]%=waru;
			}
		}
	}
	/*
	rep(i,k+1){
		rep(j,n){
			cout<<"i="<<i<<" j="<<j<<"--> "<<dp[i][j][0]<<"-"<<dp[i][j][1]<<endl;;
		}
	}
	*/



	cout<<dp[k][t][0]<<endl;

	return 0;
}
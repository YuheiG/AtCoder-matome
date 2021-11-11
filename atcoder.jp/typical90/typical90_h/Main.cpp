#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){
	ll waru=pow(10,9)+7;
	int n;
	string s,pos_st="atcoder";
	cin>>n>>s;
	vector<vector<ll>> dp(7,vector<ll>(n,0));
	vector<int> moji(n),pos(7);

	rep(i,n)moji.at(i)=s.at(i);
	rep(i,7)pos.at(i)=pos_st.at(i);

	int count=0;
	rep(i,n){
		if(moji.at(i)==pos.at(0))count++;
		dp.at(0).at(i)=count;
	}

	for(int i=1;i<7;i++){
		for(int j=1;j<n;j++){
			if(moji.at(j)==pos.at(i)){
				dp.at(i).at(j)+=dp.at(i-1).at(j-1);
			}
			dp.at(i).at(j)+=dp.at(i).at(j-1);
			dp.at(i).at(j)%=waru;
		}
	}

	cout<<dp.at(6).at(n-1)<<endl;

    return 0;
}





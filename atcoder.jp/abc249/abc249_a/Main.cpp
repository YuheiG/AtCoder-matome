#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){

	int a,b,c,d,e,f,x;
	cin>>a>>b>>c>>d>>e>>f>>x;

	int ans1=0,ans2=0;

	rep(i,x){
		if(i%(a+c)<=a)ans1+=b;
		if(i%(d+f)<=d)ans2+=e;
	}

	if(ans1>ans2){
		cout<<"Takahashi"<<endl;
	}else if(ans1==ans2){
		cout<<"Draw"<<endl;
	}else{
		cout<<"Aoki"<<endl;
	}
	
	return 0;
}


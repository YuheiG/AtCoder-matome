#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	double a,b,c,x;
	cin>>a>>b>>c>>x;


	if(x<=a){
		cout<<1.0<<endl;
	}else if(x<=b){
		double ans=c/(b-a);
		cout<<ans<<endl;
	}else{
		cout<<0.0<<endl;
	}





    return 0;
		
}
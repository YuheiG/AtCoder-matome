#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){
	//cout<<gcd(12,5)<<endl;
	ll a,b,all,bll;
	ll max18=1000000000000000000;
	cin>>a>>b;
	all=a;
	bll=b;
	double A,B;
	A=a*1.0;
	B=b*1.0;

	if(a<b)swap(a,b);
	ll r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
	}

	all/=b;
	//cout<<b<<endl;
	if((max18/all)<bll){
		cout<<"Large"<<endl;

	}else{
		
			cout<<all*bll<<endl;
		
		
	}



    return 0;
}
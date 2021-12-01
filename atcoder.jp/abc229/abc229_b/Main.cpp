#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;



int main(){

	ll a,b;
	cin>>a>>b;
	while(!a==0&&!b==0){
		int A,B;
		A=a%10;
		B=b%10;
		//cout<<A<<" "<<B<<endl;
		if(A+B>=10){
			cout<<"Hard"<<endl;
			return 0;
		}
		a/=10;
		b/=10;
	}

	cout<<"Easy"<<endl;
	return 0;
}
	






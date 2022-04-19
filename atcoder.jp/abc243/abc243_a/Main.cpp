#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int v,a,b,c;
	cin>>v>>a>>b>>c;
	string ans;
	while(true){
		v-=a;
		if(v<0){
			cout<<'F'<<endl;
			return 0;
		}
		v-=b;
		if(v<0){
			cout<<'M'<<endl;
			return 0;
		}
		v-=c;
		if(v<0){
			cout<<'T'<<endl ;
			return 0;
		}
	}

	
	return 0;		
}
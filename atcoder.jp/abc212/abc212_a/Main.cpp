#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){
	int a,b;
	cin>>a>>b;
	if(a==0){
		cout<<"Silver"<<endl;
	}else if(b==0){
		cout<<"Gold"<<endl;	
	}else{
		cout<<"Alloy"<<endl;
	}


	return 0;
}



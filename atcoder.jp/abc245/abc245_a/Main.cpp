#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){
	
	int a,b,c,d;
	cin>>a>>b>>c>>d;

	if(a>c){
		cout<<"Aoki"<<endl;
	}else if(a==c){
		if(b>d){
			cout<<"Aoki"<<endl;
		}else{
			cout<<"Takahashi"<<endl;
		}

	}else{
		cout<<"Takahashi"<<endl;
	}

	

    return 0;
}
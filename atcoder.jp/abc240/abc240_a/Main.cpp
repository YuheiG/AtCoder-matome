#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){
	int a,b;
	cin>>a>>b;
	if(abs(a-b)==1||abs(a-b)==9){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}

    return 0;
}
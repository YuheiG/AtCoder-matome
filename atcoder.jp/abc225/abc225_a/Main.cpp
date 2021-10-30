#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;


int main(){
	char a,b,c;
	set<char> moji;
	cin>>a>>b>>c;
	moji.insert(a);
	moji.insert(b);
	moji.insert(c);
	if(moji.size()==1){
		cout<<1<<endl;
	}else if(moji.size()==2){
		cout<<3<<endl;
	}else{
		cout<<6<<endl;
	}

	return 0;
}
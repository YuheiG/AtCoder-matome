#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){

	string s;
	cin>>s;
	bool ans;

	rep(j,3){
		ans=true;
		rep(i,s.size()){
			if(i%3==j){
				if(s.at(i)!='o')ans=false;				
			}else if(i%3==(j+1)%3){
				if(s.at(i)!='x')ans=false;	
			}else if(i%3==(j+2)%3){
				if(s.at(i)!='x')ans=false;	
			}
			if(!ans)break;
		}
		if(ans)break;
	}

	if(ans){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}



    return 0;
}
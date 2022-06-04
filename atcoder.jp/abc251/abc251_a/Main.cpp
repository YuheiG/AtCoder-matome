#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){
	string st,ans="";
	cin>>st;
	if(st.size()==1){
		rep(i,6)ans+=st;	
	}else if(st.size()==2){
		rep(i,3)ans+=st;
	}else{
		ans=st+st;
	}	

	cout<<ans<<endl;


	return 0;

}



#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){
	
	ll waru=998244353;

	int q;
	cin>>q;
	rep(w,q){

		int n;
		vector<int> moji(26,0);
		string st;
		cin>>n>>st;
		int s_size=st.size();
		ll ans=1;

		rep(i,s_size/2){
			ans=(ans-1)*26+st.at(i)-64;
			ans%=waru;
		}
		//cout<<st<<" ->"<<ans<<endl; 

		if(s_size%2==1){

			ans=(ans-1)*26+st.at(s_size/2)-64;
			ans%=waru;
			for(int i=0;i<s_size/2;i++){
				if(st.at(s_size/2-i-1)<st.at(s_size/2+i+1)){
					break;
				}else if(st.at(s_size/2-i-1)==st.at(s_size/2+i+1)){
					continue;
				}else{
					ans--;
					break;
				}
			}

			//cout<<st<<" ->"<<ans<<endl; 
		}else{
			for(int i=0;i<s_size/2;i++){
				if(st.at(s_size/2-i-1)<st.at(s_size/2+i)){
					break;
				}else if(st.at(s_size/2-i-1)==st.at(s_size/2+i)){
					continue;
				}else{
					ans--;
					break;
				}
			}
		}
		if(ans==-1)ans+=waru;

		cout<<ans<<endl;
		






	}


	return 0;
		
}
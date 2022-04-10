#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int n;
	cin>>n;
	vector<vector<bool>> masu(n,vector<bool>(n));

	rep(i,n){
		string st;
		cin>>st;
		rep(j,n){
			if(st.at(j)=='#'){
				masu.at(i).at(j)=true;
			}else{
				masu.at(i).at(j)=false;
			}
		}
	}

	rep(i,n){
		rep(j,n){
			int count_w=0;
			if(i<=n-6){
				rep(k,6){
					if(!masu.at(i+k).at(j))count_w++;
				}
				if(count_w<3){
					cout<<"Yes"<<endl;
					return 0;
				}else{
					count_w=0;
				}
			}
			

			if(j<=n-6){
				rep(k,6){
					if(!masu.at(i).at(j+k))count_w++;
				}
				if(count_w<3){
					cout<<"Yes"<<endl;
					return 0;
				}else{
					count_w=0;
				}
			}

			if(j<=n-6&&i<=n-6){
				rep(k,6){
					if(!masu.at(i+k).at(j+k))count_w++;
				}
				if(count_w<3){
					cout<<"Yes"<<endl;
					return 0;
				}else{
					count_w=0;
				}				
			}

			if(j>=5&&i<=n-6){
				rep(k,6){
					if(!masu.at(i+k).at(j-k))count_w++;
				}
				if(count_w<3){
					cout<<"Yes"<<endl;
					return 0;
				}else{
					count_w=0;
				}

			}
		}
	}

	cout<<"No"<<endl;
	




    return 0;
		
}
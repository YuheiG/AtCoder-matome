#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int n,a,b;
	cin>>n>>a>>b;

	bool color=true;
	rep(i,n){
		
		rep(j,a){

			if(i%2==0){
				color=true;
			}else{
				color=false;
			}

			rep(k,n){
				rep(m,b){
					if(color){
						cout<<'.';
					}else{
						cout<<'#';
					}
				}
				color=!color;
			}
			cout<<endl;
		}
	}

	return 0;

}


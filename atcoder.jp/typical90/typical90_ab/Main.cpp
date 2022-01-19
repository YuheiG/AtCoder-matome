#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int n;
	Graph	masu(1010,vector<int>(1010,0));
	cin>>n;
	rep(i,n){
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		masu.at(x1).at(y1)++;
		masu.at(x2).at(y2)++;
		masu.at(x1).at(y2)--;
		masu.at(x2).at(y1)--;
	}


	/*rep(j,7){
		rep(i,7){
			cout<<masu.at(i).at(j)<<" ";
		}
		cout<<endl;
	}*/


	rep(i,1001){
		rep(j,1000){
			masu.at(i).at(j+1)+=masu.at(i).at(j);
		}
	}
	rep(i,1001){
		rep(j,1000){
			masu.at(i+1).at(j)+=masu.at(i).at(j);
		}
	}
	/*cout<<"-------------"<<endl;

	rep(j,7){
		rep(i,7){
			cout<<masu.at(i).at(j)<<" ";
		}
		cout<<endl;
	}
*/
	
	vector<int> ans(2000000,0);

	rep(i,1001){
		rep(j,1001){
			ans.at(masu.at(i).at(j))++;
		}
	}

	rep(i,n+1){
		if(i==0)continue;
		cout<<ans.at(i)<<endl;
	}


	return 0;
}
	
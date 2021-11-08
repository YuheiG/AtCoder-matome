#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){
   
    int h,w;
    cin>>h>>w;
    vector<vector<int>> a(h,vector<int>(w));
    vector<int> tate(w),yoko(h);

    rep(i,h){
    	int sum=0;
    	rep(j,w){
    		cin>>a.at(i).at(j);
    		sum+=a.at(i).at(j);
    	}
    	yoko.at(i)=sum;
    }

    rep(i,w){
    	int sum=0;
    	rep(j,h){
    		sum+=a.at(j).at(i);
    	}
    	tate.at(i)=sum;
    }

    rep(i,h){
    	rep(j,w){
    		int ans=tate.at(j)+yoko.at(i)-a.at(i).at(j);
    		cout<<ans<<" ";
    	}
    	cout<<endl;
    }


    return 0;
}
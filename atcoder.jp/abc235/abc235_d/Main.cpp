#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){
   	
   	ll a,n,tag;
   	n=pow(10,6);
   	cin>>a>>tag;

    queue<pair<int,int>> que;

    vector<bool> seen;
    seen.assign(n,false);
    que.push(make_pair(1,0)); 

    seen.at(1)=true;
    while (!que.empty()) {

        int v=que.front().first; 
        int ans=que.front().second;
       // if(ans>10)break;
       
        //cout<<v<<" "<<ans<<endl;        
        if(v==tag){
        	cout<<ans<<endl;
        	return 0;
        }
        que.pop();

        if(v*a<n){
        	if(!seen.at(v*a)){
        		que.push(make_pair(v*a,ans+1));
        		seen.at(v*a)=true;
        	}
        }

        int keta=1;
        while(v>=pow(10,keta)){
        	keta++;
        }



        if(v%10!=0){
        	int ichi=v%10;
        	v/=10;
        	v+=ichi*pow(10,keta-1);
        	if(!seen.at(v)){
        		que.push(make_pair(v,ans+1));
        		seen.at(v)=true;
        	}
        }

    }
    cout<<-1<<endl;

    return 0;
}
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

vector<int> front,back;
queue<int> ans;
void outman(int x,bool fb){
	if(fb){
      if(front.at(x)!=-1)outman(front.at(x),fb);
      ans.push(x+1);	
     
	}else{
      	
	ans.push(x+1);
	  if(back.at(x)!=-1)outman(back.at(x),fb);
   
	}
	return;
}

int main(){

	int Q,que,n;
	cin>>n>>Q;
	front.assign(n,-1);
  	back.assign(n,-1);

	rep(i,Q){
		cin>>que;
		int x,y;
		if(que==1){
			cin>>x>>y;
          x--;y--;
			front.at(y)=x;
			back.at(x)=y;
		}else if(que==2){
          cin>>x>>y;
          x--;y--;
			front.at(y)=-1;
			back.at(x)=-1;
		}else{
			cin>>x;
          x--;
			if(front.at(x)!=-1)outman(front.at(x),true);
			ans.push(x+1);
			if(back.at(x)!=-1)outman(back.at(x),false);
          cout<<ans.size()<<" ";
          while(!ans.empty()){
            cout<<ans.front()<<" ";
            ans.pop();
          }
          cout<<endl;
		}
	}
	return 0;

}
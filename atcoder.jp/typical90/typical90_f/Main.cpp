#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int n,k;
	string s;
	cin>>n>>k>>s;

	vector<queue<int>> moji(26);

	rep(i,n)moji.at(s.at(i)-97).push(i);

	string ans;
	int picn=0,nm=0,np=-1;
	while(picn!=k){
		//cout<<"ans="<<ans<<" np="<<np<<endl;
		nm=0;
		while(true){
			if(moji.at(nm).size()==0){
				nm++;
				continue;
			}
			int c=moji.at(nm).front();
			char test=nm+97;
			//cout<<"--nm="<<nm<<"-"<<test<<" np="<<np<<" c="<<c<<endl;
			if(c>np&&n-k+picn>=c){
				char A=nm+97;
				ans=ans+A;
				moji.at(nm).pop();
				np=c;
				picn++;
				break;
			}else if(c<np){
				moji.at(nm).pop();
			}else{
				nm++;
			}
		}
	}

	cout<<ans<<endl;

    return 0;
}





#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;


int main(){
	int n,mas;
	cin>>n;
	vector<bool> used(n);
	rep(i,n-1){
      //cout<<i<<endl;
		int a,b;
		cin>>a>>b;
        a--;b--;
		if(i==0){
			used.at(a)=true;
			used.at(b)=true;
			continue;
		}
        if(i==1){
          if(used.at(a)){
            mas=a;
            used.at(b)=true;
          }else if(used.at(b)){
            mas=b;
            used.at(a)=true;
          }else{
            cout<<"No"<<endl;
            return 0;
          }
          continue;
        }
		if(a==mas){
			if(used.at(b)){
				cout<<"No"<<endl;
				return 0;
			}
			used.at(b)=true;

		}else if(b==mas){
			if(used.at(a)){
				cout<<"No"<<endl;
				return 0;
			}
			used.at(a)=true;

		}else{
			cout<<"No"<<endl;
			return 0;
		}
		
	}
	cout<<"Yes"<<endl;

	return 0;
}
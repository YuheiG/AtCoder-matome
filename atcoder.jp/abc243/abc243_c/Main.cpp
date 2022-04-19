#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int n;
	cin>>n;
	map<int,pair<int,int>> m;
	vector<int> x(n),y(n);

	rep(i,n)cin>>x.at(i)>>y.at(i);
	

	string st;
	cin>>st;

	rep(i,n){
		bool muki=true;
		if(st.at(i)=='L')muki=false;
		if(m.find(y.at(i))==m.end()){

			if(muki){
				m.insert(make_pair(y.at(i),make_pair(-1,x.at(i))));
			}else{
				m.insert(make_pair(y.at(i),make_pair(x.at(i),pow(10,9)+1)));
			}
		}else{
			if(muki){
				m.at(y.at(i)).second=min(m.at(y.at(i)).second,x.at(i));
			}else{
				m.at(y.at(i)).first=max(m.at(y.at(i)).first,x.at(i));
			}
		}
	}
/*
	for( auto i = m.begin(); i != m.end() ; ++i ) {
      cout<< i->first << "("<< i->second.first<<" , "<<i->second.second<<")" <<endl;
  }*/


	rep(i,n){
		if(m.at(y.at(i)).first>m.at(y.at(i)).second){
			cout<<"Yes"<<endl;
			return 0;
		}
	}


	cout<<"No"<<endl;

	
	return 0;		
}
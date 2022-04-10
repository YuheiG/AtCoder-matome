#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int n;
	cin>>n;
	string s;

	rep(i,n){
		
		if(i<9){
			char num=i+49;
			
			if(i==0){
				s=num;	
			}else{
				s=s+" "+num+" "+s;
			}
		}else{
			char num=i+39;
			s=s+" 1"+num+" "+s;
			
		}

	}

	cout<<s<<endl;

	



	


    return 0;
		
}
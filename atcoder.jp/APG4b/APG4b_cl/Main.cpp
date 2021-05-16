#include <bits/stdc++.h>
using namespace std;

int main() {
  int i,N, A,x;
  string st;
  cin >> N >> A;
  for(i=0;i<N;i++){
  	cin>>st>>x;
    if(st=="+"){A+=x;
    }else if(st=="-"){A-=x;
    }else if(st=="*"){A*=x;
    }else if(st=="/"){
      if(x==0){
        cout<<"error"<<endl;
        break;
      }else{
      	A/=x;
      }
    }
    cout<<i+1<<":"<<A<<endl;
  }
  
}
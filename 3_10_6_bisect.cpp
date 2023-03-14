#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m,n;
void res(ll i){
	if(i%2==0)
	{
		m = i*i/2;
		n= i*i/2;
	}else{
		m = i*i/2+1;
		n= i*i/2;
	}
	
}

int main(){
	int T;
	cin>>T;
	for(int t = 0;t<T;t++){
		ll a,b;
		cin>>a>>b;
		if(a==0&&b==0) cout<<0<<endl;
		if(max(a,b)==1&&min(a,b)==0) cout<<1<<endl;
		else{
			ll l = 1;
			ll r = max(a,b);
			while(l<r){
				ll mid = (l+r+1)/2;
				res(mid);
				if(max(a,b)>m||min(a,b)>n) l= mid;
				else r=mid - 1;
			}
			cout<<r+1<<endl;
			
		}	
	}
}


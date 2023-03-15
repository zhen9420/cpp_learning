#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
	ll n;
	cin>>n;
	ll a = 0;
	if(n==0) cout<<0;
	else if(n<0){
		a = -n;
		ll ans = 0;
		while (a!=0) {
		ans = ans *10+a%10;
		a/=10;}
		cout<<-ans;
	
	}else{
		a = n;
		ll ans = 0;
		while (a!=0) {
		ans = ans *10+a%10;
		a/=10;
		}
		cout<<ans;
	}	
	return 0;
}

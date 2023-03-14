#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
	ll n,k;
	cin>>n>>k;
	ll m = n-k;
	ll a[n],b[n];
	for(int i = 0;i<n;i++){
		cin>>a[i]>>b[i];
	} 
	ll ans1=0,ans2=0;
	while(m>0&&k>0){
		for(int i = 0;i<n;i++){
			if(a[i]>b[i]) {
				m--;
				ans1 += a[i];
			}
			else if(a[i]<b[i]) {
				k--;
				ans1 += b[i];
			}
			else if(a[i]==b[i]){
				if(m>k) {
					m--;
					ans1 += b[i];
				}
				if(m<k){
					k--;
					ans1 += b[i];
					
				}
				if(m==k){
					ans1+=b[i];
					k--;
				}
			}
		}
	}
	cout<<ans1 ;
	
}

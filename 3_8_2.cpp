#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
typedef  long long ll;
ll qpow(ll a, ll b) 
{
    ll ans = 1;
    while(b) {
        if(b & 1) ans = (ans * a) % mod;
        b >>= 1;
        a = (a * a) % mod;
    }
    return ans;
}
	

int main()
{
	
	int t;
	cin>>t;
	
	for(int i = 0;i<t;i++)
	{
		int n,p;
		cin>>n>>p;
		long long a[n];
		for(int j = 0;j<n;j++)
		{
			cin>>a[j];
		}
		sort(a,a+n);
		long long ans1 = 0;
		long long ans2 = 0;
		if(p==1) cout<<n%2<<endl;
		else {
		for(int j = 0;j<n-1;j++) 
		{
			ans1=(ans1+qpow(p,a[j]))%mod;
		
		}
		ans2 =qpow(p,a[n-1])%mod;
		cout<<(ans2-ans1+mod)%mod<<endl;}
		
	}
	return 0;

	
}

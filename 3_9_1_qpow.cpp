#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll qpow(ll a,ll b)
{
	ll ret = 1;
	ll x = a;
	while(b != 0)
	{
		if(b%2==0&&b!=0) {
			ret = x * ret;
			x = ret;
			b/=2;
		}
		else{
		 ret = ret * a;
		 b--;
		 }
	}
	return ret;
}
int main()
{
	ll a,b;
	cin>>a>>b;
	cout<<qpow(a,b);
 
} 

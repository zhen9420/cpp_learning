#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long c)
{
	while(c!=0)
	{
		long long t = a%c;
		a = c;
		c = t;
	}
	return a;
}
int main(){
	long long a,b,c;
	scanf("%lld %lld %lld",&a,&b,&c);

	long long k = min(min(a,b),c);
	long long m = max(max(a,b),c);

	if(k%m==0) printf("%lld",k/m);
	else printf("%lld/%lld",k/gcd(k,m),m/gcd(k,m));
	
	return 0;
}

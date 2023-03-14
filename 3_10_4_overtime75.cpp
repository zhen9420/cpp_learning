#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll key(ll t)
{
	ll ret = t*t/2;
	return ret;
}
int main(){
	int n;
	cin>>n;
	for(int t = 0;t<n;t++)
	{
		long long a,b;
		cin>>a>>b;
		long long n =0;
		if(a==0&&b==0) cout<<0<<endl;
		else{
		
			 int i = 1;
			ll m = 0,n=0;
			while(1)
			{
				if(i%2==0)
				{
					m = i*i/2;
					n= i*i/2;
				}else {
					m = i*i/2+1;
					n= i*i/2;
				}
				if(max(a,b)<=m)
				{	
					int m1=m;
					int n1 = n;
					int t = i;
					while(max(a,b)<=m1)
					{	
						t--;
						if(t%2==0)
						{
							m1 = t*t/2;
							n1= t*t/2;
						}
						else {
						m1 = t*t/2+1;
						n1=	t*t/2;
						}
					
					}
					if(min(a,b)<=key(t+1))
					{
						cout<<t+1<<endl;
						break;
					}
					else{
						cout<<t+2<<endl;
						break;
					}
				}else {
					i*=2;
				}
			}
		}
	}
}

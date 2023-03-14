#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
			for(;i<=max(a,b);i++)
			{
				if(i%2==0)
				{
					m = i*i/2;
					n= i*i/2;
				}
				else {
					m = i*i/2+1;
					n= i*i/2;
				}
				if(max(a,b)<=m)
				{
					if(min(a,b)<=n)
					{
						cout<<i<<endl;
						break;
					}
					else{
						cout<<i+1<<endl;
						break;
					}
				}
			}
		}
	}
}

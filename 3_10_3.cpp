#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin>>n;
	for(int j = 0;j<n;j++)
	{
		
		long long a,b;
		cin>>a>>b;
		long long n =0;
		if(a==0&&b==0) cout<<0<<endl;
		else{
		
			 int i = 1;
			ll m = 0,n=0;
			for(;i<=100000;i++)
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
					int t = i;
					ll m1 =0;
					ll n1 = 0;
					if(t%2==0)
						{
							m1 = t*t/2;
							n1= t*t/2;
						}
						else {
							m1 = t*t/2+1;
							n1= t*t/2;
						}
					for(t;max(a,b)<=m1;t--)
					{
						if(t%2==0)
						{
							m1 = t*t/2;
							n1= t*t/2;
						}
						else {
							m1 = t*t/2+1;
							n1= t*t/2;
						}
					}
					if(min(a,b)<=n1)
                    {
                        cout<<t+2<<endl;
                        break;
                    }
                    else{
                        cout<<t+2<<endl;
                        break;
				}
					
				}
				else{
					i*=2;
				}
			}
		}
	}
	
}

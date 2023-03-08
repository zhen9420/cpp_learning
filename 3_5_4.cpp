#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n = 0;
	unsigned long long s = 0;
	cin>>n>>s;
	unsigned long long ans[n];
	for(int i=0;i<n;i++){
		ans[i] = s/n;
	}
	if(s%n!=0){
		unsigned long long  m = s%n;
		
		
			for(int i=n-1;i>=0;i--)
			{
				ans[i]++;
				m--;
				if(m==0) break;
			}
		
	}
	for(int i = 0;i<n;i++)
	{
		cout<<ans[i]<<' ';
	}
	
}

#include<bits/stdc++.h>
using namespace std;
int main() 
{
	long int n = 0;
	long int p = 0;
	long long ans = 2;
	cin>>n>>p;
	for(int i = 1 ;i<=n;i++)
	{
		ans = (ans*ans)%p;
	}
	cout<<ans;
}

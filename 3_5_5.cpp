#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int ans = 0;
	int x = 0;
	int ans2=0;
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
		ans += a[i]+x;
		x += a[i];
	}
	
	for(int i = 0;i<n;i++)
	{
		ans2 +=a[i];
	}
	ans2*=2;
	cout <<min(ans,ans2);
}

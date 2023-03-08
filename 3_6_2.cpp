#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long a[n];
	long long ans = 0;
	long long x = 0;
	
    
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i =0;i<n;i++)
	{
		ans += a[i]+x;
		x += a[i];
	}	
	
	
	cout <<ans;

}

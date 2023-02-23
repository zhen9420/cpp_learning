#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,n;
	cin>>x>>n;
	long long ans = n;
	for(int i = x;i<x+n;i++)
	{
		if(i%7==6||i%7==0)
		{
			ans -=1;
		}
	}
	cout << ans*250;
	return 0;
}

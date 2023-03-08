#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int n= 0;
	int x = 0;
	cin>>n>>x;
	int ans = 0;
		
	
	for(int i = 1;i<=n;i++)
	{
		int num = i;
		for(int j = 0;j<7;j++)
		{	
			if(x == num%10) ans++;
			num /= 10;
			if (num ==0) break;
		}
	}
	cout << ans;
	return 0;
} 

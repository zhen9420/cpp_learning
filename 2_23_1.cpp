#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	int a[10];
	int ans =0;
	for(int i = 0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	cin>>x;
	for(int i =0;i<10;i++)
	{
		if(x+30>=a[i]) ans++;
	}
	cout << ans;
} 

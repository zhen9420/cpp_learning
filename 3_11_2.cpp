#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int m;
	if(n/4>=4) m =4;
	else m = n/4;
	int a[4];
	int ans=0;
	for(int i =0;i<n;i++){
		for(int j =0;j<4;j++)
		{
			cin>>a[j];
		}
		sort(a,a+4); 
		for(int t=4-m;t<4;t++)
		{
			ans += a[t];
		}
	}
	cout<<ans;
}

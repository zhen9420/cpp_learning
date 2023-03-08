#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	for(int i = 0;i<t;i++)
	{
		int n,q;
		cin>>n>>q;
		char*qus[n];
		char*ans[n];
		for(int j = 0;j<n;j++)
		{
			cin>>qus[j]>>ans[j];
			cout<<qus[j]<<' '<<ans[j]<<endl;
		}
//		char*s[q];
//		for(int v = 0;v<q;v++);
//		{
//			cin>>s[v];
//			for(int k =0;k<n;k++)
//			{
//				if(s[v]==qus[k]) cout<<ans[k];
//				else if(k==n-1) cout<<"Not your business, don't ask more!";
//			}
		//}
		
	}
	return 0;
}

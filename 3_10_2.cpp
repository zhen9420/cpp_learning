#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s1,s2,s3;
int main()
{
	int x;
	cin>>x;
	for(int i = 0;i<x;i++)
	{
		cin>>s1>>s2;
		
		if(s1.length()==s2.length())
		{
			for(int j = 0;j<s1.length();j++)
			{
				ll m = 0;
				m=(s1[j]-'0')*(s2[j]-'0');
				cout<<m;
				if(j==s1.length()-1) cout<<endl;
				
			
			}
			
		}
		else cout<<-1<<endl;
	}
} 

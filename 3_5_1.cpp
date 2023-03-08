#include<bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long x = 0;
	string s="heee";
	int sign = 1;
	cin>>s;
	if(s[0]=='-') 
	{
		for (int i = 1;i<s.length();i++)
		{
			x+=(s[i]-'0')*pow(10,s.length()-i-1);
		}
		sign = -1;
	}
	else{
		for (int i = 0;i<s.length();i++)
		{
			x+=(s[i]-'0')*pow(10,s.length()-i-1);
		}	
	}
	if(sign == -1&&x<=214748364) cout<<"NO";
	
	else if(sign == 1 && x<=2147483647) cout<<"NO";
	else cout<<"YES";
	
}

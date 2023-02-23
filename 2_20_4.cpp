#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	char s[5100];
	char k[5100];
	char x[5100];
	for(int j = 0;j<n;j++)
	{
		cin >>x[j];
	}
	
	cin>>k;
	int i =0;
	for(int j =0;j<n;j++)
	{
		if(x[j]>=97&&x[j]<=122)
		{
			s[i]= x[j];
			i++;
		}
	}

	string t(s);
	string y(k);

	for(int j =0;j<=t.length();j++)
	{
	
		if((t.substr(j,m))==y)	{
			printf("YES");
			break;
		}else if(j == t.length())  printf("NO");
		
	}
	return 0;
	
}

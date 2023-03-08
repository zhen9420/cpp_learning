#include<bits/stdc++.h>
using namespace std;
bool cmp(double k,double add)
{
	bool ret;
	int w = 1e-8;
	if(add-w<k)  ret = true;
	else  			ret = false;
	return ret;
	
}
int main()
{
	double k=0;
	cin>>k;
	int n = 1;
	double d = 0;
	double add = 0;
	while(cmp(k,add))
	{
		add += (1.0/n);
		n++;
	}
	if(k==1) cout<<n;
	else cout<<n-1;
}

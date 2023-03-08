#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	long long n;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	long long sum = 1;
	int j= 0;
	int k = 0;
	for(int i = 0;i<n;i++)
	{
		sum *= a[i];
		while(a[i]%5==0&&a[i]!=0) {
		j++; a[i]/=5;}
		while (a[i]%2==0&&a[i]!=0)	{
		k++;a[i]/=2;}
		while (sum>=1e15) {
		sum/=10;}
	}	
	while(sum>=1000) {
	sum/=10;}
	cout<<sum<<endl<<min(j,k);
} 

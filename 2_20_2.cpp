#include<bits/stdc++.h>
using namespace std;
int maxa(int a[],int len){
	int ret = 0;
	int k = a[0];
	for (int i = 0;i<len;i++)
	{
		if(a[i]>k)
		{
			k = a[i];
			ret = i;	
		} 
	}
	return ret; 
}
int mina(int a[],int len){
	int k = a[0];
	int ret =  0;
	for (int i = 0;i<len;i++)
	{
		if(a[i]<k)
		{
		  
		k = a[i];
		ret = i;
		}
	}
	return ret; 
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s1 = abs(maxa(a,n)-mina(a,n));
	int s2 = max(n-1-maxa(a,n),maxa(a,n)) ;
	int s3 = max(n-1-mina(a,n),mina(a,n)) ;
	int ans = max(max(s1,s2),s3);
	printf("%d",ans);

	return 0;
}

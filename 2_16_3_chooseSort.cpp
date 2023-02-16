#include<bits/stdc++.h>
using namespace std;
int max(int a[],int len)
{
	int maxid = 0;
	for (int i = 2;i<len ;i++){
		if(a[i]>a[maxid]){
			maxid = i;
		}
	}
	return maxid;
}
int main(){

	int a[] = {45,32,28,56,71,99,33,56};
	int len = sizeof(a)/sizeof(a[0]);
	int maxid =max(a,len);
	for ( int i = len-1;i>0;i--){
		int maxid = max(a,i+1);
		swap(a[maxid],a[i]);
	}
	for ( int i = 0;i<len;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

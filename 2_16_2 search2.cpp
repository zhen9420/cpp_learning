#include<bits/stdc++.h>
using namespace std;
int search(int key,int a[],int len)
{
	int left= 0;
	int right=len -1;
	int ret = -1;
	
	while(left <= right){
		int mid = (left +right)/2;
		if(a[mid] == key){
			ret = mid;
			break;	
		}else if(a[mid]>key){
			right = mid-1;
		}else if(a[mid] < key){
			left = mid + 1;
		}
	}
	return ret;
	
}
int main(){
	int x ;
	scanf("%d",&x);
	int a[]={2,3,4,5,};
	int num = search(x,a,sizeof(a)/sizeof(a[0]));
	printf("%d",num);
	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
//int main (){
//	int n;
//	int fact=1;
//	int i=1;
//	scanf("%d",&n);
//	while (i<n){
//		fact *=(i+1);
//		i++;
//	}
//	printf("%d",fact);
//	return 0;
//} 
int main (){
	int n;
	int fact =1;
	int i=1;//可以合并在for中 ，i=2也可以，少做一次循环 
	scanf("%d",&n);
	for (;i<=n;i++)//初始条件可以省略，但是；不能{
		fact *=i;
	}
	printf("%d",fact);
	return 0;
}

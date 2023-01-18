#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	
	for (int i = 0;i <n;i++){
		int m;
		int num = 0;
		scanf("%d",&m);
		for(int j = 0;j<m;j++){
			int s[j];
			scanf("%d",&s[j]);
			if(s[j]>0){
				num ++;
			}
		}
		printf("%d\n",num);
	}
	
	return 0;
}

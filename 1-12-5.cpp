#include<bits/stdc++.h>
using namespace std;
int main(){
	int z=0;
	int f =0;
	int a[10];
	for(int i=0 ;i<10;i++){
	scanf("%d",&a[i]);
	if(a[i]>0){z++;
	}
	if(a[i]<0){f++;
	}
	}
	printf("positive:%d\nnegative:%d",z,f);
	return 0;
	
}

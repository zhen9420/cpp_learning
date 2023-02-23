#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;
	int ans=-1;
	scanf("%d %d %d",&n,&a,&b);
	int k = 0;
	for(int i = 0;a*i<=n;i++)
	{
		for(int j = 0;b*j<=n;j++)
		{
			k = n-a*i-b*j;
			if((k<ans||ans== -1)&&k>=0) ans =k;
		}	
		
	}
	 
        
        
    printf("%d\n",ans);
}

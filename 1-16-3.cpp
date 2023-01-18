#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
    for(int i= 0;i<n;i++){
		string s;
		cin >>s;
		int a = 0;
		int b = 0;
		int j = 1;
		for(; j <= 10; j+=1){
			if(s[j-1] == '1'){
				if(j%2!=0 ){
					a++;
				}else{
					b++;
				}		
			}
			if(a > b && (j%2!=0)){
			
				if(abs( a - b - 1) > (10-j)/2) 
					break;
			}
			if(a >b&&(j%2==0)){
				if(a-b>(10-j)/2 )
					break;
			}
			if(a < b && (j % 2 ==0 )){
				if( b-a > (10-j)/2) 
					break;
			}
			if(a < b && (j % 2 !=0 )){
				if(b-a>(10-j)/2 )
					break;
			}			
		}
		if(j==11 && a == b){
			printf("-1\n");
			
		}else{
			printf("%d\n",j);
		}
	}
	return 0;
}

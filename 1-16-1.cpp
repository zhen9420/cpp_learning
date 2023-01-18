#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	for(int i= 0;i<n;i++){
		string s;
//		scanf("%s", &s);
		cin >>s;
		int num = 0;
		int j = 0;
		for(; j < 10; j+=2){
			string s1 = s.substr(j,2);
			if(s1.compare("10") == 0) {
				num++;
			}
			else if(s1.compare("01")==0){
				num --;	
			}
			if(abs(num)>(10-j)/2-1){
				printf("%d\n",j+2);
				break;
			}
			
		}
		if(j==10&&(num<=(10-j)/2)-1){
			printf("-1\n");
		}
	}
	return 0;
} 

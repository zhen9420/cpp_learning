#include<bits/stdc++.h>
using namespace std;
int judge(int x){
	int ret;
	if( x % 4 ==0){
		if(x%100== 0){
			if(x % 400 == 0){
				ret = 1;
			}
			else {
				ret = 0;
			}
		}
		else{
			ret = 1;
		}
	}
	else{
		ret = 0;
	}
	return ret;
	
} 

int main(){
	int y,m;
	cin >>y>>m;
	struct{
		int month;
		int day;
	}num1[]{
		{1,31},
		{2,29},
		{3,31},
		{4,30},
		{5,31},
		{6,30},
		{7,31},
		{8,31},
		{9,30},
		{10,31},
		{11,30},
		{12,31}
		
		
	}; 
	struct{
		int month;
		int day;
	}num0[]{
		{1,31},
		{2,28},
		{3,31},
		{4,30},
		{5,31},
		{6,30},
		{7,31},
		{8,31},
		{9,30},
		{10,31},
		{11,30},
		{12,31}
		
		
	};
	if(judge(y)) {
		printf("%d",num1[m-1].day);
	}else
	{
		printf("%d",num0[m-1].day);
	}
	return 0;
	
}

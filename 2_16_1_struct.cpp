#include<bits/stdc++.h>
using namespace std;
int main(){
	int amount[] ={1,2,3};
	char *name[] = {"January","Februay","March"};
	struct{
		 int amount;
		 char *name;
	}coins[] = {
		{1,"January"},
		{2,"February"},
		{3,"March"}
		
	};
	int x;
	cin >> x;
	for(int i = 0;i<sizeof(coins)/sizeof(coins[0]);i++) {
		if( x == coins[i].amount){
			//printf("%s\n",coins[i].name);
			cout << coins[i].name;
			break;
		}
	}
	
	
	return 0;
}

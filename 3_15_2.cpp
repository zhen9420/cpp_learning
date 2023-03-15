#include<bits/stdc++.h>
using namespace std;
int main(){
	int y,a,b,c;
	cin>>y;
	a=y%4;
	b=y%100;
	c=y%400;
	if(a==0&&b!=0){
		cout<<"ÊÇ";
	}
	else if(c==0){
		cout<<"ÊÇ"; 
	}
	else{
		 cout<<"²»"; }
	}

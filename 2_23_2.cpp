#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[3];
	string b("hi");
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	cin>>b;
	if(b=="ABC") printf("%d %d %d",a[0],a[1],a[2]);
	if(b=="ACB") printf("%d %d %d",a[0],a[2],a[1]);
	if(b=="BAC") printf("%d %d %d",a[1],a[0],a[2]);
	if(b=="BCA") printf("%d %d %d",a[1],a[2],a[0]);
	if(b=="CAB") printf("%d %d %d",a[2],a[0],a[1]);
	if(b=="CBA") printf("%d %d %d",a[2],a[1],a[0]);
	return 0;
} 

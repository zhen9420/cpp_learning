#include<bits/stdc++.h>
using namespace std;
void idea1(){
	cout<<"拜会乔国老，将娶亲之事传遍东吴。\n"; 
}
void idea2(){
	cout<<"骗说曹操大军压境，速回！\n"; 
}
void idea3(){
	cout<<"请孙夫人解围\n";
}
void quqin(void(*handler[])(),int n){
	cout<<"进入东吴\n";
	handler[0]();
	cout<<"刘备贪恋美色，不肯回来？";
	string s;
	cin>>s;
	if(s=="是") {
		handler[1]();
	} 
	cout<<"离开东吴，有无追兵？";
	cin>>s;
	if(s=="有"){
		handler[2]();
	}
	 
}
int main(){
	void(*func[3])() ={idea1,idea2,idea3
	};
	quqin(func,3);
	
}

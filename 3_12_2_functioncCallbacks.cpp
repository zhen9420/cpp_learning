#include<bits/stdc++.h>
using namespace std;
void idea1(){
	cout<<"�ݻ��ǹ��ϣ���Ȣ��֮�´��鶫�⡣\n"; 
}
void idea2(){
	cout<<"ƭ˵�ܲٴ��ѹ�����ٻأ�\n"; 
}
void idea3(){
	cout<<"������˽�Χ\n";
}
void quqin(void(*handler[])(),int n){
	cout<<"���붫��\n";
	handler[0]();
	cout<<"����̰����ɫ�����ϻ�����";
	string s;
	cin>>s;
	if(s=="��") {
		handler[1]();
	} 
	cout<<"�뿪���⣬����׷����";
	cin>>s;
	if(s=="��"){
		handler[2]();
	}
	 
}
int main(){
	void(*func[3])() ={idea1,idea2,idea3
	};
	quqin(func,3);
	
}

#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int m,t,s,a;
    cin>>m>>t>>s;
    if(t==0) {cout<<0;return 0;}//�ж�t=0�����
    a=m-ceil((double)s/t);//���㻹ʣ���ٸ���ceil����ȡ������Ϊ��ʹʣ���Ҳ����������
    if(a<=0) cout<<0;//����Ե�ֻʣ�����ˣ�˵���Ѿ�������
    else cout<<a;//���������ʣ����ƻ��
    return 0;
}
 

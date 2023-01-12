#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	double pi = 3.141593;
	switch (n){
		case 1:printf("I love Luogu!");break;
		case 2:printf("6 4");break;
		case 3:printf("3 12 2");break;
		case 4:printf("166.666");break;
		case 5:printf("15");break;
		case 6:printf("%f",sqrt(6.0*6.0+9.0*9.0));break;
		case 7:printf("110\n90\n0\n");break;
        case 8:
        	
		    printf("%f\n%f\n%f",2.0*pi*5,pi*5.0*5,4.0/3*pi*125);break;
		case 9:printf("22");break;
	    case 10:printf("9");break;
	    case 11:printf("%f",100.0/3);break;
	    case 12:printf("13 R");break;
	    case 13:printf("%f",(pow(4/3*pi*(4*4*4+10*10*10),1.0*1/3)));break;
	    case 14:printf("50");break;
	}
	return 0;
}

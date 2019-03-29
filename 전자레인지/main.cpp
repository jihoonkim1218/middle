#include <iostream>
#include <cstdio>

using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a=300,b=60,c=10,t,i,j,k,min=9999,a_=0,b_=0,c_=0,aa=9999,bb=9999,cc=9999;
	scanf("%d", &t);
	for(i=0;i<t;i++){
		for (j=0;j<t;j++) {
			for (k=0;k<t;k++) {
				if (t-(i*c+j*b+k*a)==0&&a_+b_+c_<min) {
					a_=k;
					b_=j;
					c_=i;
					min=a_+b_+c_;
				}
			}
		}
	}
	if (a_==0&&b_==0&&c_==0) {
	printf("-1");
	return 0;	
	}
	printf("%d %d %d", a_,b_,c_);
			
 	return 0;
}

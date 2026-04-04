#include <stdio.h>
#include <stdlib.h>
int main(){
	double a,b,c,Perimetr=0,plowad6=0,proverka_na_pravilnost=0;
	printf("bbedite dlini storon\n");
	printf("a=");
	scanf("%lf",&a);
	printf("b=");
	scanf("%lf",&b);
	printf("c=");
	scanf("%lf",&c);
	Perimetr=a+b+c;
	if(a+b<c,a+c<b,b+c<a){
		printf("treygolnik_neveren");
	}
	else{
		plowad6=0.5**(Perimetr(Perimetr-a)(Perimetr-b)(Perimetr-c));
		printf("perimetr=%.2lf",Perimetr);
		printf("plowad=%.2lf",plowad6);
		
	}
}

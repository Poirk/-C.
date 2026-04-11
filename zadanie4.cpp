#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double Perimetr(double a,double b,double c){
return a+b+c;
}
double plowad6(double a, double b,double c){
double p = Perimetr(a,b,c)/2.0;
return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main(){
	double a,b,c;
	printf("bbedite dlini storon\n");
	printf("a=");
	scanf("%lf",&a);
	printf("b=");
	scanf("%lf",&b);
	printf("c=");
	scanf("%lf",&c);
	if(a+b<=c || a+c<=b || b+c<=a){
		printf("treygolnik_neveren");
	}
	else{
		double P=Perimetr(a,b,c);
		double S=plowad6(a,b,c);
		printf("perimetr=%.2lf",P);
		printf("plowad=%.2lf",S);
		
	}
}

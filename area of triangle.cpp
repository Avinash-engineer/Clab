#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,s,area;
	printf("enter values of a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\n area=%.2f",area);
	return 0;
}

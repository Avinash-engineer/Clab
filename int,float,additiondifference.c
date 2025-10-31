#include<stdio.h>
int main() {
	int a,b,intsum,intdifference;
	float x,y,floatsum,floatdifference;
	printf("enter two integer values:");
	scanf("%d%d",&a,&b);
	printf("enter two float values:");
	scanf("%f%f",&x,&y);
	intsum=a+b;
	intdifference=a-b;
	floatsum=x+y;
	floatdifference=x-y;
	printf("\n.....results.....\n");
	printf("integer sum=%d\n",intsum);
	printf("integer difference=%d\n",intdifference);
	printf("float sum=%.2f\n",floatsum);
	printf("float difference=%.2f\n",floatdifference);
	return 0;
}

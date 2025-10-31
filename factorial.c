#include<stdio.h>
int main(){
	int n,i;
	long long factorial=1;
	printf("Enter a positive number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		factorial*=i;
	}
	printf("factorial of %d = %llu\n",n,factorial);
	return 0;
}

#include<stdio.h>
int main(){
	int a[100],n,i,large;
	printf("enter any numbers:");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d\n",&a[i]);
	}
	printf("The array elements are..\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	large=a[0];
	for(i=1;i<n;i++){
		if(a[i]>large){
			large=a[i];
		}
	}
	printf("the largest value=%d",large);
	return 0;
}

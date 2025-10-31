#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two integers:");
	scanf("%i%i",&a,&b);
	printf("\n...Bitwise operators...\n");
	printf("a&b=%i\n",a&b); //AND
	printf("a|b=%i\n",a|b); //OR
	printf("a^b=%i\n",a^b); //XOR
	printf("~a=%i\n",~a);  //NOT
	printf("a<<1=%i\n",a<<1);//Left shift
	printf("a>>1=%i\n",a>>1);//Right shift
	return 0;
}

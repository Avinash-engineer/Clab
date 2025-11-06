#include<stdio.h> 
int main() 
{ 
 int n, r, sum=0, t; 
 printf("Enter 3digits number:"); 
 scanf("%d",&n); 
 t=n; 
 printf("\n the given nuber=%d",n); 
 while(n>0) 
{ 
r=n%10; 
sum=sum+(r*r*r); 
n=n/10; 
} 
if(t==sum) 
{ 
} 
else 
{ 
} 
printf("\n%d is Armstrong Number",t); 
printf("\n%d is Not Armstrong Number",t);
return 0;
}

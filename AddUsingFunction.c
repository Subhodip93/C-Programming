#include<stdio.h>
int add(int x,int y){
	return x+y;
}	
main(){
	int a,b,res;

	printf("Enter value of A: ");
	scanf("%d",&a);
	printf("Enter value of B: ");
	scanf("%d",&b);

	res=add(a,b);

	printf("\nA + B = %d + %d = %d",a,b,res);
}

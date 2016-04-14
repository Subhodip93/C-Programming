#include<stdio.h>
int add(int x,int y){
	return x+y;
}
int subtract(int x,int y){
	return x-y;
}
int multiply(int x,int y){
	return x*y;
}
int divide(int x,int y){
	return x/y;
}
int mod(int x,int y){
	return x%y;
}
main(){
	int a,b,res;
	char op;

	printf("Enter value of A: ");
	scanf("%d",&a);
	printf("Enter value of B: ");
	scanf("%d",&b);
	
	printf("Enter Operator: ");
	scanf(" %c",&op);

	switch(op){
		case '+': res=add(a,b); break;
		case '-': res=subtract(a,b); break;
		case '*': res=multiply(a,b); break;
		case '/': res=divide(a,b); break;
		case '%': res=mod(a,b); break;
	}
	printf("\nA %c B = %d %c %d = %d",op,a,op,b,res);
}

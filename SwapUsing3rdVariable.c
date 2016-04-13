#include<stdio.h>
main(){
	int a,b,c;

	printf("Enter value of A: ");
	scanf("%d",&a);
	printf("Enter value of B: ");
	scanf("%d",&b);

	c=a;
	a=b;
	b=c;

	printf("\nAfter Swapping...\nThe value of A: %d\nThevalue of B: %d",a,b);
}

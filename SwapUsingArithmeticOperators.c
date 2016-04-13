#include<stdio.h>
main(){
	int a,b;

	printf("Enter value of A: ");
	scanf("%d",&a);
	printf("Enter value of B: ");
	scanf("%d",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("\nAfter Swapping...\nThe value of A: %d\nThevalue of B: %d",a,b);
}

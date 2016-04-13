#include<stdio.h>
void swap(int* x,int* y){
	int c=*x;
	*x=*y;
	*y=c;
}	
main(){
	int a,b;

	printf("Enter value of A: ");
	scanf("%d",&a);
	printf("Enter value of B: ");
	scanf("%d",&b);

	swap(&a,&b);

	printf("\nAfter Swapping...\nThe value of A: %d\nThevalue of B: %d",a,b);
}

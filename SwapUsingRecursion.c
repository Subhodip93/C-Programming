#include<stdio.h>
int n=1; 
void swap(int a,int b){
	if(n==0){
		printf("\nAfter Swapping...\nThe value of A: %d\nThevalue of B: %d",a,b);
		return;
	}
	n--;
	swap(b,a);
}
main(){
	int a,b;
	printf("Enter value of A: ");
	scanf("%d",&a);
	printf("Enter value of B: ");
	scanf("%d",&b);

	swap(a,b);
}

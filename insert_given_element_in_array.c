#include<stdio.h>
#include<conio.h>
void Insert_given_position(int A[], int n, int pos, int val);
void main() {
	int i, n, A[20], val, pos;
	printf("\n Enter the number of elements in array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n Enter the %d element: ",i);
		scanf("%d",&A[i]);
	}	
	
	printf("\n the given arrays is : ");
	for(i=0;i<n;i++){
		printf("\t %d",A[i]);
	}
	
	printf("\n Enter the element to be insert: ");
	scanf("%d",&val);
	
	printf("\n Enter the position to be insert: ");
	scanf("%d",&pos);
	
	Insert_given_position(A, n, val, pos);
		
}
void Insert_given_position(int A[], int n, int val, int pos) {
	int I = n;
	int i;
	while(I>= pos) {
		A[I+1] = A[I];
		I = I - 1;
	}
	n = n + 1;
	A[pos] = val;
		  
	printf("\n After entering the element: ");
	for(i=0;i<n;i++){
		printf("\t %d",A[i]);
	}
}

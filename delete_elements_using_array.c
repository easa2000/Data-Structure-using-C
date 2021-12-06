#include<stdio.h>
#include<conio.h>

void delete_element(int A[], int n, int pos);
void main() {
	int n, pos, A[20], i;
	printf("\n Enter the number of element in array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("enter the element: ");
		scanf("%d",&A[i]);
	}
	printf("\n the given array is: ");
	for(i=0;i<n;i++) {
		printf("\t %d",A[i]);
	}
	
	printf("\n Enter the position to be delete: ");
	scanf("%d",&pos);
	
	delete_element(A, n, pos);
	
}

void delete_element(int A[], int n, int pos) {
	int i = pos;
	int j;
	while(i<=n-1) {
		A[i] = A[i+1];
		i = i + 1;
	}
	n = n - 1;
	printf("\n After deleted: ");
	for(j=0; j<n; j++) {
		printf("\t %d",A[j]);
	}
}

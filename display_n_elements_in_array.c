#include<stdio.h>
void main() {
    int i,n,arr[20];
    printf("\n Enter the number of element in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf(" a[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n The elements of array is ");
    for(i=0;i<n;i++){
        printf("\t%d",arr[i]);
    }
}

// selection sort 
#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selection(int arr[],int n){
    int i,j,k;int min_index;
    for(i=0;i<n-1;i++){
        min_index=i;
        for(j=i+1;j<n-2;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(&arr[i],&arr[min_index]);
    }
}
void display(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return;
}
int main(){
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        printf("Enter the element :");
        scanf("%d",&arr[i]);
    }
    printf("\n before sorting \n");
    display(arr,n);
    printf("\n after sorting \n");
    selection(arr,n);
    display(arr,n);
    return 0;
}
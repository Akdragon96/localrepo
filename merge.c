//merge sort 
#include<stdio.h>
#include<stdlib.h>
void mergesort(int arr[],int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        mergesort(arr[],left,mid);
        mergesort(arr[],mid+1,right);
        merge(arr[],left,mid,right);
    }
}
void merge(int arr[],int left,int mid,int right){
    int i,j,k;
    int n1=mid-left+1;
    int n2=right-mid;
    int L[n1];
    int R[n2];
    for(i=0;i<n1;i++){
        L[i]=arr[left+i];
    }
    for(j=0;j<n2;j++){
        R[j]=arr[mid+j+1];
    }
    i=0;
    j=0;
    k=left;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void display(int arr[],int left,int right){
    int i;
    for(i=left;i<=right;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        printf("Enter the element :");
        scanf("%d",&arr[i]);
    }
    printf("\n Before sorting \n");
    
    mergersort(arr,0,n-1);
    
}
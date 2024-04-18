//quick sort 
#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int temp=*a;
    int *a=*b;
    *b=temp;
}
void quicksort(int arr[],int low,int high){
    if(low<high){
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    int j;
    for(j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}
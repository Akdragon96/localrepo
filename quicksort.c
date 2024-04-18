//quick sort 
#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    int j;
    for(j = low; j < high; j++){ 
        if(arr[j] <= pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}

void quicksort(int arr[], int low, int high){
    if(low < high){ 
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

void print_array(int arr[], int low, int high){
    int i;
    for(i = low; i <= high; i++){
        printf("%d\t", arr[i]);
    }
}

int main(){
    int arr[5] = {5, 8, 3, 4, 9};
    quicksort(arr, 0, 4);
    print_array(arr, 0, 4);
    return 0; 
}

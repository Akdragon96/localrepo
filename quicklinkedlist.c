#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

struct node *create_node(int value){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

void insert(struct node **head, int value){
    if(*head == NULL){
        *head = create_node(value);
        return;
    }
    struct node *ptr = *head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = create_node(value);
}

struct node *get_tail(struct node *head){
    while(head != NULL && head->next != NULL){
        head = head->next;
    }
    return head;
}

struct node *partition(struct node *low, struct node *high, struct node **new_low, struct node **new_high){
    int pivot = high->data;
    struct node *i = low;
    struct node *prev = NULL, *tail = high;

    while (low != high) {
        if (low->data < pivot) {
            if ((*new_low) == NULL)
                (*new_low) = low;

            prev = low;
            low = low->next;
        } else {
            if (prev)
                prev->next = low->next;
            struct node *temp = low->next;
            low->next = NULL;
            tail->next = low;
            tail = low;
            low = temp;
        }
    }

    if ((*new_low) == NULL)
        (*new_low) = high;

    (*new_high) = tail;

    return high;
}

struct node *quicksort_recur(struct node *low, struct node *high){
    if (!low || low == high)
        return low;

    struct node *new_low = NULL, *new_high = NULL;

    struct node *pivot = partition(low, high, &new_low, &new_high);

    if (new_low != pivot) {
        struct node *temp = new_low;
        while (temp->next != pivot)
            temp = temp->next;
        temp->next = NULL;

        new_low = quicksort_recur(new_low, temp);

        temp = get_tail(new_low);
        temp->next = pivot;
    }

    pivot->next = quicksort_recur(pivot->next, new_high);

    return new_low;
}

void quicksort(struct node **head_ref){
    *head_ref = quicksort_recur(*head_ref, get_tail(*head_ref));
    return;
}

void display(struct node *ptr){
    while(ptr != NULL){
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main(){
    struct node *head = NULL;
    int num;
    printf("Enter the number of records :");
    scanf("%d", &num);
    while(num > 0){
        int value;
        printf("Enter the element :");
        scanf("%d", &value);
        insert(&head, value);
        num--;
    }
    quicksort(&head);
    printf("Sorted List: ");
    display(head);
    return 0;
}


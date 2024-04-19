#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *create(struct node **head){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    printf("Enter the data :");
    scanf("%d",&newnode->data);
    if(*head==NULL){
        *head=newnode;
    }
    else{
        temp=*head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
struct node *at_beginning(struct node **head){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    printf("Enter the data");
    scanf("%d",&newnode->data);
    if(*head==NULL){
        *head=newnode;
    }
    else{
        newnode->next=*head;
        *head=newnode;
    }
}
void insert(struct node **head){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    struct node *curr=*head;
    struct node *prev=NULL;
    int index;
    printf("Enter the index number:");
    scanf("%d",&index);
    printf("Enter the data :");
    scanf("%d",&newnode->data);
    int i;
    for(i=0;i<=index && curr!=NULL;i++){
        prev=curr;
        curr=curr->next;
    }
    prev->next=newnode;
    newnode->next=curr;
}
void display(struct node *head){
    while(head!=NULL){
        printf("%d\t",head->data);
        head=head->next;
    }
    return;
}
int main(){
    int n;
    struct node *head=NULL;
    printf("How much times do you want to insert :");
    scanf("%d",&n);
    while(n>0){
        create(&head);
        n--;
    }
    //at_beginning(&head);
    insert(&head);
    display(head);
    
    return 0;
}
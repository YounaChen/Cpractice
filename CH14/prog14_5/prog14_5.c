/* linklist.h */
#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *createList(int *, int);
void printList(NODE *);
void freeList(NODE *);
// void insertNode(NODE *, int);
// NODE *searchNode(NODE *, int);
// NODE *deleteNode(NODE *, NODE *);


int main(void){
    NODE *first;
    int arr[]={14,27,32,46};
    first=createList(arr,4);
    printList(first);
    freeList(first);

    system("pause");
    return 0;
}

NODE *createList(int *arr , int num){
    int i;
    NODE *first, *current, *previous;

    for(i=0;i<num;i++){
        current=(NODE *)malloc(sizeof(NODE));
        current->data=arr[i];
        if(i==0){
            first=current;
            previous=current;
        }
        else{
            previous->next=current;
        }
        current->next=NULL;
        previous=current;

    }

    return first;
}

void printList(NODE *first ){
    NODE *node;
    node=first;
    if(first==NULL){
        printf("List is empty");
    }
    else{
        while(node!=NULL){
            printf("%3d", node->data);
            node=node->next;
        }
        printf("\n");
    }
    
}

void freeList(NODE *first ){
    NODE *current, *tmp;
    current=first;
    while(current!=NULL){
        tmp=current;
        current=current->next;
        free(tmp);
    }
    
}





#include<stdio.h>
#include<stdlib.h>

typedef struct Node {

    struct Node * prev;
    int data;
    struct Node * next;
}nd;

nd * head = NULL;

nd * createNode(){

    nd * newNode=(nd*)malloc(sizeof(nd));

    printf("Enter Data : ");
    scanf("%d",&newNode->data);

    newNode->prev=NULL;
    newNode->next=NULL;

    return newNode;
}

void addNode(){

    nd * newNode=createNode();

    if(head==NULL){
        head=newNode;
    }
    else {

        nd * temp=head;

        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
        newNode->next=head;
    }
}

int count(){

	nd * temp =head;
	int cnt = 0;
	while(temp!=NULL){
		cnt++;
		temp=temp->next;
	}
	return cnt;
}
void addAtFirst(){

    nd * newNode=createNode();

    if(head==NULL){
        head=newNode;
    }
    else{

        nd * temp=head;

        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}

void addAtLast(){

    addNode();
}

int addAtPos(int pos){

    nd * newNode=createNode();
    int cnt=count();

    if(head==NULL){
        head=newNode;
    }
    else if(pos<1 || pos>cnt+1){
        printf("Invalid Position Entered !");
    }
    else if(pos==cnt+1){

        addAtLast();
    }
    else {

        nd * temp=head;

        while(pos-2){

            temp=temp->next;
            pos--;
        }
        new

    }

    
}
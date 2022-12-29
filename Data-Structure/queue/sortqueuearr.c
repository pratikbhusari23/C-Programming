
#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX];
int front=-1,rear=-1;


void enqueue(int data){
    if(rear==MAX-1){
        printf("Queue is Full");
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear]=data;
    }
}

void dequeue(){
    
    if(front==-1 || front>rear){
        printf("Queue is Empty");
    }
    else{
        front++;
    }
}

void sort(){
    int i,j,temp;
    for(i=0;i<MAX;i++){
        for(j=i+1;j<MAX;j++){
            if(queue[i]>queue[j]){
                temp=queue[i];
                queue[i]=queue[j];
                queue[j]=temp;
            }
        }
    }
}   

void display(){
    int i;
    for(i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
}

int main(){
    int i,data;
    for(i=0;i<MAX;i++){
        printf("Enter Data :\n");
        scanf("%d",&data);
        enqueue(data);
    }
    sort();
    display();
    return 0;
}

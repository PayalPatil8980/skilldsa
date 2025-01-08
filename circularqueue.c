#include<stdio.h>
int rear=-1;
int front=-1;
void equeue(int a[],int n, int x){
    if(rear==-1 && front==-1){
        front=rear=0;
        a[rear]=x;
    }
    else if(((rear+1)%n)==front){
        printf("Queue is full\n");                                                                                                                                      
    }
    else{
        rear=rear+1;
        a[rear]=x;
    }
}
void dequeue(int a[],int n){
    if(front==-1 && rear==-1){
        printf("Queue is empty");
    }
    else if(rear==front){
        front=rear=-1;
    }
    else{
        printf("%d dequed: ",a[front]);
        front=(front+1)%n;
        printf("\n");
    }
}
void display(int a[],int n){
    int i=front;
    if(front==-1 && rear==-1){
        printf("queue is empty");
    }
    else{
        while(i!=rear){
            printf("%d\t",a[i]);
            i=(i+1)%n;
        }
        printf("%d\t",a[rear]);
        printf("\n");
    }
}


int main(){
    int a[6];
    int n=6;
    int x;
    equeue(a,n,10);
    equeue(a,n,20);
    equeue(a,n,30);
    equeue(a,n,40);
    equeue(a,n,50);
    equeue(a,n,60);
    
    display(a,n);
    dequeue(a,n);
    display(a,n);
    equeue(a,n,70);
    display(a,n);
}
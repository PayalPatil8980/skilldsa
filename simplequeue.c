#include<stdio.h>
int front=-1;
int rear=-1;
int i;
void equeue(int a[],int n,int x){
    if(front==n-1){
        printf("Queue is full");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        a[rear]=x;
    }
    else{
        rear++;
        a[rear]=x;
    }
}

void dequeue(int a[],int n){
    if(front==-1||front>rear){
        printf("queue is empty\n");
        front=rear=-1;
    }
   
    else{
        printf("Dequed %d \n",a[front]);
        front++;
    }
}
void display(int a[]){
    if(front==1 && front>rear){
        printf("queue is empty\n");
    }
    else{
        for(i=front;i<=rear;i++){
            printf("%d\t",a[i]);
        }
    }
}

int main(){
    int n=5;
    int a[n];
  
    
    equeue(a,n,12);
    equeue(a,n,15);
    display(a);
    dequeue(a,n);
    display(a);
    dequeue(a,n);
    display(a);
    dequeue(a,n);
    
}
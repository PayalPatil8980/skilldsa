#include<stdio.h>
#define size 5
int queue[size];
int f=0,r=0,x,i;
void insert_front(int x){
    if((f==0 && r==size-1)||(f==r+1)){
        printf("\nOverflow");
    }
    else if((f==-1) && (r==-1)){
        f=r=0;
        queue[f]=x;
    }
    else if(f==0){
        f=size-1;
        queue[f]=x;
    }
    else{
        f=f-1;
        queue[f]=x;
    }
}

void insert_rear(int x){
    if((f==0 && r==size-1)||(f==r+1)){
        printf("\nOverflow");
    }
    else if((f==-1) && (r==-1)){
        r=0;
        queue[r]=x;
    }
    else if(r==size-1){
        r=0;
        queue[r]=x;
    }
    else{
        r++;
        queue[r]=x;
    }
}

void display(){
    i=f;
    if((f==-1) && (r==-1)){
        printf("queue is empty");
    }
    else{
        while(i!=r){
            printf("%d\t",queue[i]);
            i=(i+1)%size;
        }
        printf("%d\t",queue[r]);
    }
}

void delete_front(){
    if((r==-1) && (f==-1)){
        pritnf("queue is empty");
    }
    else if(f==r){
        printf("dequed elemnt from front is: %d",queue[f]);
        f=r=-1;
    }
    else if(f==(size-1)){
        printf("Dequed elemnt from front is: %d",queue[f]);
        f=0;
    }
    else{
        printf("Dequed element from front is: %d",queue[f]);
        f=f+1;
    }
}

void delete_rear(){
    if((r==-1) && (f==-1)){
        printf("queue is empty");
    }
    else if(r==f){
        printf("dequed elemnt from rear is: %d",queue[r]);
        r=r-1;
    }
    else if(r==0){
        printf("dequed elemnt from rear is: %d",queue[r]);
        r=size-1;
    }
    else{
        printf("dequed elemnt from rear is: %d",queue[r]);
        r=r-1;
    }
}

int main(){
    insert_front(20);
    insert_front(30);
    insert_front(40);
    display();
    insert_rear(90);
    insert_rear(95);
    insert_rear(100);
    delete_front();
    delete_rear();
    display();
}



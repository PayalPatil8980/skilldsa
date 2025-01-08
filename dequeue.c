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
        printf("\n");
    }
}

void delete_front(){
    if((r==-1) && (f==-1)){
        printf("queue is empty");
    }
    else if(f==r){
        printf("\ndequed elemnt from front is: %d",queue[f]);
        f=r=-1;
    }
    else if(f==(size-1)){
        printf("\nDequed elemnt from front is: %d",queue[f]);
        f=0;
    }
    else{
        printf("\nDequed element from front is: %d",queue[f]);
        f=f+1;
    }
}

void delete_rear(){
    if((r==-1) && (f==-1)){
        printf("queue is empty");
    }
    else if(r==f){
        printf("\ndequed elemnt from rear is: %d",queue[r]);
        r=r-1;
    }
    else if(r==0){
        printf("\ndequed elemnt from rear is: %d",queue[r]);
        r=size-1;
    }
    else{
        printf("\ndequed elemnt from rear is: %d",queue[r]);
        r=r-1;
        printf("\n");
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


/*
#include<stdio.h>
#define size 5
int queue[size];
int f=-1,r=-1,x,i;

void insert_front(int x){
    if((f == (r + 1) % size)){
        printf("\nOverflow");
    }
    else if(f == -1 && r == -1){
        f = r = 0;
        queue[f] = x;
    }
    else if(f == 0){
        f = size - 1;
        queue[f] = x;
    }
    else{
        f = f - 1;
        queue[f] = x;
    }
}

void insert_rear(int x){
    if((f == (r + 1) % size)){
        printf("\nOverflow");
    }
    else if(f == -1 && r == -1){
        r = 0;
        queue[r] = x;
    }
    else if(r == size - 1){
        r = 0;
        queue[r] = x;
    }
    else{
        r++;
        queue[r] = x;
    }
}

void display(){
    i = f;
    if(f == -1 && r == -1){
        printf("Queue is empty\n");
    }
    else{
        while(i != r){
            printf("%d\t", queue[i]);
            i = (i + 1) % size;
        }
        printf("%d\t", queue[r]);
        printf("\n");
    }
}

void delete_front(){
    if(f == -1 && r == -1){
        printf("Queue is empty\n");
    }
    else if(f == r){
        printf("\nDequeued element from front: %d", queue[f]);
        f = r = -1;  // Reset both to -1 when the queue is empty
    }
    else if(f == size - 1){
        printf("\nDequeued element from front: %d", queue[f]);
        f = 0;
    }
    else{
        printf("\nDequeued element from front: %d", queue[f]);
        f = f + 1;
    }
}

void delete_rear(){
    if(f == -1 && r == -1){
        printf("Queue is empty\n");
    }
    else if(f == r){
        printf("\nDequeued element from rear: %d", queue[r]);
        f = r = -1;  // Reset both to -1 when the queue is empty
    }
    else if(r == 0){
        printf("\nDequeued element from rear: %d", queue[r]);
        r = size - 1;
    }
    else{
        printf("\nDequeued element from rear: %d", queue[r]);
        r = r - 1;
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
*/
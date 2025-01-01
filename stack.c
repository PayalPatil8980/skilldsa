#include<stdio.h>
#define n 5

int i;
int top=-1;
int arr[n];

void push(int a){
    if( top>=n-1 ){
        printf("Stack is full\n");
    }
    else{
        top++;
        arr[top]=a;
    }
}

void pop(){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        top--;
      
    }
}
void peep(){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        for(i=0;i<=top;i++){
           printf("%d\t",arr[i]);
        }
        printf("\n");
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(40);
    peep();
}
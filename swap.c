#include<stdio.h>

int main(){

    int a=10,b=20;
    printf("Before swapping");
    printf("\nA: %d ",a);
    printf("\nB: %d ",b);

    int *ptr1;
    int *ptr2;
    ptr1=&a;
    ptr2=&b;

    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;

    printf("\nAfter swapping\n");
    printf("A: %d ",*ptr1);
    printf("B: %d ",*ptr2);
}
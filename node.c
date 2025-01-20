#include<stdio.h>

struct Node{
    int data;
    char ch;
    struct Node *ptr;
};

int main(){
    struct Node s1,s2,s3;
    s1.data=65;
    s1.ch='A';
    s2.data=66;
    s2.ch='B';
    s3.data=67;
    s3.ch='C';
    // printf("\n%d %c",s1.data,s1.ch);
    // printf("\n%d %c",s2.data,s2.ch);
    // printf("\n%d %c",s3.data,s3.ch);
    
    s1.ptr=&s2; 
    s2.ptr=&s3;
    s3.ptr=&s1;
    s1.ptr->data;
    s1.ptr->ch;
    s2.ptr->data;
    s2.ptr->ch;

    printf("\n%d %c",*s1.ptr,*s1.ptr);
    printf("\n%d %c",*s2.ptr,*s2.ptr);
    printf("\n%d %c",*s3.ptr,*s3.ptr);
    
}
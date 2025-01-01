#include<stdio.h>

void selection(int a[],int n){
    int i,j,small;
    for(i=0;i<n-1;i++){
        //small=i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[i]){
                //small=j;
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    }
}
void print(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}  
int main(){
    int a[6]={89,12,45,2,0,8};
    int n=sizeof(a)/sizeof(a[0]);
    printf("The elemnts before sort");
    printf("\n");
    print(a,n);
    selection(a,n);
    printf("\nAfter elemnts are sort");
    printf("\n");
    print(a,n);
    
}
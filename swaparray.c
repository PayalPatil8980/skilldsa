#include<stdio.h>

int main(){
    int n;
    int i,a[n];
    printf("Enter the value for array size");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the elements of array at position:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
        
    }
     printf("\n");
    for(i=0;i<5;i++){
        a[0]=a[0]+a[n-1];
        a[n-1]=a[0]-a[n-1];
        a[0]=a[0]-a[n-1];
       
        printf("%d\t",a[i]);
    }

}
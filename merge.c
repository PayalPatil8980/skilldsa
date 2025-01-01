#include<stdio.h>

int main(){
    int i,n,m,len=0,j,str[50];
    printf("Enter the size of array 1: ");
    scanf("%d",&n);
    printf("Enter the size of array 2: ");
    scanf("%d",&m);
    int a[n],b[m];
    for(i=0;i<n;i++){
        printf("Enter the elements: ");
        scanf("%d",&a[i]);
    }
    for(j=0;j<m;j++){
        printf("Enter the elements: ");
        scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++,len++){
        str[len]=a[i];
    }
    for(j=0;j<n;j++,len++){
        str[len]=b[j];
    }
    printf("Combined array is: ");
    for (i = 0; i < (n + m); i++) {
        printf("%d ", str[i]);
    }
    printf("\n");
}
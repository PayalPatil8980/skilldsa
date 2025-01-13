#include<stdio.h>

int main(){

    int i,j;
    //int a[6]={3,2,7,4,9,1};
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<(n-1);j++){
            if(a[j]>a[j+1]){
                int temp=a[j]; 
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}

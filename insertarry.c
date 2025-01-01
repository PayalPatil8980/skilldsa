#include<stdio.h>

int main(){
    int i,n,pos=0,no;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]); 
        printf("\n");
    }
    printf("\n");
    printf("Enter the new element: ");
    scanf("%d",&no);
    printf("Enter the position: ");
    scanf("%d",&pos);

    if(pos < 1 || pos > n + 1) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n + 1);
        return 1;
    }
    for(i=n;i>=pos-1;i--){

        a[i+1]=a[i];
    }
    a[pos-1]=no;
    n++;
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        printf("\n");
    }
}
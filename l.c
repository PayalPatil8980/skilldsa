#include<stdio.h>

void lsearch(int a[],int n,int val){
    int pos[n];
    int i;
    int count=0;
    for(i=0;i<n;i++){
        if(a[i]==val){
            pos[count++]=i+1;
        }
    }
    if(count==0){
        printf("The elemt not found");
    }
    else{
        printf("the element  %d found at the position of :",val);
        for(i=0;i<count;i++){
            printf("%d\t",pos[i]);
        }
        printf("\n");
    }
    
}
int main(){
    int i,a[5],val;
    int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Enter the value for serach: ");
    scanf("%d",&val);
    lsearch(a,n,val);
   
}


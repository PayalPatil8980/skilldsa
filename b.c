#include<stdio.h>

int bsearch(int a[],int n,int val){
    int mid,high,low;
    low=0;
    high=n-1;
    
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==val){
            return mid;
        }
        if(a[mid]<val){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int i,a[5],val;
    int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++){
        printf("Enter the elements: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Enter the value for search: ");
    scanf("%d",&val);
    int res=bsearch(a,n,val);
    if(res==-1){
        printf("The elemnt not found");
    }
    else{
        printf("The elemnt found %d on index :%d ",val,res);
    }
}
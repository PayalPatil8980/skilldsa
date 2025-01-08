#include<stdio.h>

int bsearch(int arr[],int n,int val){
    int mid,high,low;
    low=0;
    high=n-1;
    while (low<=high)
    {
    mid=(high+low)/2;
    if(arr[mid]==val){
        return mid;

    }
    if(arr[mid]<val){
        low=mid+1;
    }
    else{
        high=mid-1;
    }

    }
    return -1;
}

int main(){
    int val,arr[8],i;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("Enter the value for search: ");
    scanf("%d",&val);
    int res=bsearch(arr,n,val);
    if(res==-1){
        printf("The elment not found in array");
    }
    else{
        printf("The elment %d found on index :%d ",val,res);
    }
}
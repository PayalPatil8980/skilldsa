#include<stdio.h>

void merge(int arr[],int lb,int mid,int ub){
    int i=lb;
    int j=mid+1;
    int k=lb;
    int arr1[50];
    while(i<=mid && j<=ub){
        if(arr[i]>=arr[j]){
        arr1[k]=arr[i];
        i++;
        }
 
    else{
        arr1[k]=arr[j];
        j++;
    }
    k++;
    }
    if(i>=mid){
       while(j<=ub){
          arr1[k]=arr[j];
          j++;
          k++;
       }
    }
       else{
          arr1[k]=arr[i];
          i++;
          j++;
       }

       for(k=lb;k<=ub;k++){
        arr[k]=arr1[k];
       }
}




void mergesort(int arr[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        printf("call \n");
        merge(arr,lb,mid,ub);
    }
}


int main(){
    int arr[5]={50,5,30,4,80};
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    mergesort(arr,0,4);
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
}
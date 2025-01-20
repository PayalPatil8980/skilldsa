#include<stdio.h>

int partition(int a[],int lb,int ub){
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    int temp;
    while(start<end){
        while(a[start]<=pivot){
            start++;
        }
        while (a[end]>pivot)
        {
            end--;
        }
        if(start<end){
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;

    return end;
}
void quicksort(int a[],int lb,int ub){
    if(lb<ub){
    int loc=partition(a,lb,ub);
    quicksort(a,lb,loc-1);
    quicksort(a,loc+1,ub);
    }
}
int main(){
    int a[6]={7,90,5,12,4,10};
    for(int i=0;i<6;i++){
        printf("%d\t",a[i]);
    }
    printf("\n"); 
    quicksort(a,0,5);
    for(int i=0;i<6;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}














/*#include<stdio.h>

int partition(int a[], int lb, int ub) {
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    int temp;

    while (start < end) {
        
        while (a[start] <= pivot ) {
            start++;
        }

        
        while (a[end] > pivot ) {
            end--;
        }

        if (start < end) {
            
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }
    temp = a[lb];
    a[lb] = a[end];
    a[end] = temp;

    return end; 
}

void quicksort(int a[], int lb, int ub) {
    if (lb < ub) {
        int loc = partition(a, lb, ub);  
        quicksort(a, lb, loc - 1);       
        quicksort(a, loc + 1, ub);      
    }
}

int main() {
    int a[6] = {7, 90, 5, 12, 4, 10};

    printf("Original array: ");
    for (int i = 0; i < 6; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

  
    quicksort(a, 0, 5);

   
    printf("Sorted array: ");
    for (int i = 0; i < 6; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}
*/
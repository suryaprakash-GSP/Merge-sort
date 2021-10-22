#include<stdio.h>
void merge(int a[],int mid ,int low,int high){
    int i,j,k,b[high+1];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        
            b[k]=a[i];
        k++;
        i++;
        
    }
    while(j<=high){
        b[k]=a[j];
        k++;
        j++;
    }
    for(int i=low;i<=high;i++){
        a[i]=b[i];
    }
}
void mergesort(int a[],int low,int high){
    if(low<high){
        int  mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,mid,low,high);

    }
}
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    int low=0,high=n-1;
    for(int i=0;i<n;i++){
        printf("Enter a[%d] element: ",i);
        scanf("%d",&a[i]);

    }
    printf("ARRAY AFTER MERGE SORT: \n\n");
    mergesort(a,low,high);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    

    }


          
 return 0;
}
#include<stdio.h>

int main(){
    int n;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int temp,pass=0;
    //bubble sort
    while(n-pass){
        for(int i=0;i<n-1-pass;i++){
            if(ar[i]>ar[i+1]){
                temp=ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=temp;
            }
        }
        pass++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }

    printf("\nEnter element to search: ");
    int val;
    scanf("%d",&val);

    int left=0,right=n-1;
    int mid;

    while(left<=right){
        printf("Now searching in %d to %d\n",left,right);
        mid=(left+right)/2;
        if(val==ar[mid]){
            printf("Value %d found at %d",val,mid);
            return 0;
        }
        else if(val>ar[mid]){
            left=mid+1;
        }
        else{
            right=mid-1;
        }

    }
    printf("Value %d not found",val);
    return 0;

}

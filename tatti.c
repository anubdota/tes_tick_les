#include<stdio.h>
//bubble
int main(){
    int n;
    printf("Enter length: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array: ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int pass=0;pass<n-1;pass++){
        for(int j=0;j<n-1;j++){
            //compare
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            } 
        }
    }
    for(int i=0;i<n;i++){printf("%d ",arr[i]);}
}
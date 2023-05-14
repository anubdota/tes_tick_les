#include<stdio.h>
//selection
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
    for(int pass=0;pass<n;pass++){
        int max_index=0;
        for(int j=1;j<n-pass;j++){
            if(arr[max_index]<arr[j]){
                max_index=j;
            }
        }
        temp=arr[n-pass-1];
        arr[n-pass-1]=arr[max_index];
        arr[max_index]=temp;
    }

    for(int i=0;i<n;i++){printf("%d ",arr[i]);}

}
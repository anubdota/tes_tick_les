#include<stdio.h>
//insertion
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
    //
    for(int pass=0;pass<n;pass++){
        int key=arr[pass];
        for(int i=pass-1;i>=0;i--){
            if(key<arr[i]){
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
            else{break;}

        }
    }


    for(int i=0;i<n;i++){printf("%d ",arr[i]);}

}
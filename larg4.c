#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Give size of array:");
    scanf("%d",&n);
    printf("Give array , separated by spaces:");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("congo!!! array taken successfully\n");
    // printf("enter number to check: ");
    // int t;
    // scanf("%d",&t);
    //max
    int max=INT_MIN;
    for(int a=0;a<n;a++){
        if(a>max){max=a;}
    }
    //2nd max
    for(int t=0;t<2;t++){
        int max2=INT_MIN;
        for(int a=0;a<n;a++){
            if(a>max2 && a<max){max2=a;}
        }
        max=max2;
    }
    printf("here iz ze fourz largez elemenz: %d",max);

    return 0;
}

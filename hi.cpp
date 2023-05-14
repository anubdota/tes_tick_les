#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int arr[n];
    for(int a=0;a<n;a++){
        cin>>x;
        arr[a]+=x;
    }
    return 0;
}
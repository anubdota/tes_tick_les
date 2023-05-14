#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"give length: ";
    cin>>n;
    int inar[n],outar[n]={0};
    cout<<"Give array: ";
    for (int i=0;i<n;i++){
        cin>>inar[i];
    }
    //find max in array inputted
    int max=0;
    for(int i:inar){
        if(max<i){max=i;}   
    }
    //create count array of size max+1
    int count[max+1]={0};
    for (int a:inar){
        count[a]+=1;
    }
    //create cumulative count array
    for(int i=0;i<max;i++){
        count[i+1]+=count[i];
    }
    //magic 
    for (int a:inar){
        outar[count[a]-1]=a;
        count[a]--;
    }
    //show magic
    for (int b:outar){
        cout<<b<<" ";
    }

return 0;
}
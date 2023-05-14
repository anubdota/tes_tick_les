#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string lr;
        cin>>lr;
        //iterate thru the string
        for(int i;i<n-1;i++){
            if(lr[i]=='R'&& lr[i+1]=='L'){cout<<0;}
            
        }
    }
}
#include<iostream>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,d=0;
        cin>>n>>d;
        int num_i=0;
        cin>>num_i;
        int car[n];
        int dig;
        for(int i=0;num_i!=0&&i<n;i++){
            dig=num_i%10;
            car[i]=dig;
            num_i/=10;
        }
        int hip=0;
        for (int i=1;i<=n;i++){
            if(hip==0&&d>=car[n-i]){cout<<d;++hip;}
            cout<<car[n-i];
        }
        if(hip==0){cout<<d;}
        cout<<endl;
    }
return 0;
}
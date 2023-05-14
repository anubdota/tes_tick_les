#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n=0,q=0;
        cin>>n>>q;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        while(q--){
            long sum=0;
            int l=0,r=0;
            long k=0;
            cin>>l>>r>>k;
            sum+=((r-l+1)*k);
            for(int j=0;j<(l-1);j++){
                sum += ar[j];
            }
            for(int j=r;j<n;j++){
                sum+=ar[j];
            }
            if(sum%2==1){
                cout<<"yes\n";
            }
            else{cout<<"no\n";}
        }


    }
return 0;
}
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //inputs two arrays
        int a[n],b[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        for (int i=0;i<n;i++){
            cin>>b[i];
        }
        
        //all small numbers go to a
        for (int i;i<n;i++){
            if(a[i]>b[i]){swap(a[i],b[i]);}
        }
        for (int c:a){
            cout<<c<<" ";

        }
        cout<<"\n";
        for (int c:a){
            cout<<c<<" " ;
                
        }
        cout<<"\n";
        
        //finds max number in array
        int maxa=0,maxb=0;
        for (int j=0;j<n;j++){
            if(a[j]>maxa){
                maxa=a[j];
            }
            if(b[j]>maxb){
                maxb=b[j];
            }
        }
        cout<<maxa<<" "<<maxb<<endl;
        cout<<a[n-1]<<" "<<b[n-1];
        //check if last number is max
        if(a[n-1]==maxa && b[n-1]==maxb){
            cout<<"yes\n";
        }
        else{cout<<"no\n";}

    }
return 0;
}

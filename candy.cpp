#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int can[n];
        int bc=0,mc=0;
        for (int i=0;i<n;i++){
            cin>>can[i];
            if (can[i]%2==0){
                mc+=can[i];
            }
            else{
                bc+=can[i];
            }

        }
        if(mc>bc){cout<<"yes\n";}
        else{cout<<"no\n";}
    }
return 0;
}
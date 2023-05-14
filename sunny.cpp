#include<iostream>
using namespace std;
int main(){
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if (x<=8){
            if(x*y<=500){
                cout<<"YES\n";
            }
            
        }
        else{cout<<"NO\n";}
    }
    return 0;
}

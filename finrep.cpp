#include<iostream>
#include<string>
using namespace std;

int main(){
    int t=INT32_MIN;
    cin>>t;
    while(t--){
        int n,d=0;
        cin>>n;
        string s;
        cin>>s;
        for (int i=0;i<n;i++){
            for(int j=i+1;j<n;j+=2){
                if(s[i]==s[j]){
                    d=-1;
                    break;
                }
            }
            if(d==-1){cout<<"no\n";break;}
        }
        if(d!=-1){cout<<"yes\n";}

    }
return 0;
}
#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int j=0;j<t;j+=1){
        int tc=0;
        cin>>n;
        int lnum[n];
        //made the input array
        for(int i=0;i<n;i+=1){
            cin>>lnum[i];
            if (lnum[i]==2){tc+=1;}
        }
        //two counter
        if(tc%2==1){
            cout<<-1<<endl;
        }
        else if (tc==0)
        {
            cout<<1<<endl;
        }
        
        else{
            tc/=2;
            int i=0;
            while (i<n){
                if(tc==0){
                    cout<<i<<endl;
                    break;
                }
                if (lnum[i]==2){
                    tc-=1;
                }
                i+=1;
            }
        }
    }
    return 0;
}

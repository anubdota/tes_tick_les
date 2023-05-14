#include<iostream>
using namespace std;
int main(){
    int a=1,b=1,c,in;
    cin>>in;
    cout<<1<<endl;
    cout<<1<<endl;
    while(in--){
        c=b+a;
        cout<<c<<endl;
        a=b;
        b=c;
        
    }
    return 0;
}
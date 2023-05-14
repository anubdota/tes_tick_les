#include <iostream>
#include<string>
using namespace std;

int main() {
int t,n;
cin>>t;
char vowel[5]={'a','e','i','o','u'};
while(t--){
    int c=0;
    string word;
    cin>>n>>word;
    for(char ch:word){
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){c=0;}
        else{c++;}
        if (c==4){cout<<"NO\n";break;}
  
    }
    if(c!=4){cout<<"YES\n";}

    
}
return 0;
}
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    string i("hi");
    cout<<i<<endl;
    vector<int[5]> veca;
    veca.push_back({1,2,3,4,5});
    for (decltype(veca.begin()) it; veca.begin()!= veca.end()&& it<veca.end(); it++){
        cout<<*it<<endl;
    }

return 0;
}
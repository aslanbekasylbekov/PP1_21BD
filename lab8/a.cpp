#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> foo;
    for(int i=0;i<n;i++){
        int t; cin>>t;
        foo.push_back(t);
    }
    sort(foo.begin(),foo.end());
    for(auto i:foo){
        cout<<i<<" ";
    }
}
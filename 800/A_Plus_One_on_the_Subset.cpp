#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
    long long t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxi=*max_element(a.begin(),a.end());
    int mini=*min_element(a.begin(),a.end());
    cout<<maxi-mini<<endl;
}
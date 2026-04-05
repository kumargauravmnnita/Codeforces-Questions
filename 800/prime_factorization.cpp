#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    vector<long long>vec;
    cin>>n;
    for(int i=2;i<=n;i++){
        while(n%i==0){
            cout<<i<<endl;
            vec.push_back(i);
            n=n/i;
        }
    }
    for(auto it:vec){
        cout<<it<<" ";
    }
    return 0;
}
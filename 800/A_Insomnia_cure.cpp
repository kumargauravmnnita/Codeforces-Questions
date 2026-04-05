#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    unordered_set<long long>st;
    for(int i=1;i<=d;i++){
        if(i%k==0) st.insert(i);
        else if(i%l==0) st.insert(i);
        else if(i%m==0) st.insert(i);
        else if(i%n==0) st.insert(i);
    }
    cout<<st.size();
    return 0;
}
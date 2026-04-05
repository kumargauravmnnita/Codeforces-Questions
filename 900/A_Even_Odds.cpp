#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long check;
    if(n%2==0) check=n/2;
    else check=n/2+1;
    if(k<=check){
        cout<<2*k-1;
    }
    else{
        cout<<2*(k-check);
    }
    return 0;
}
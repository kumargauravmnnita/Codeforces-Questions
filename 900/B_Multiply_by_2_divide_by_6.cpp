#include<bits/stdc++.h>
using namespace std;
void solve();
// vector<long long>primefactorization(long long n){
//     vector<long long>vec;
//     for(int i=2;i<=n;i++){
//         while(n%i==0){
//             vec.push_back(i);
//             n=n/i;
//         }
//     }
//     return vec;
// }
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
    long long n,count_two=0,count_three=0;
    cin>>n;
    //vector<long long>factors= primefactorization(n);
    // for(int i=0;i<factors.size();i++) {
    //     if(factors[i]>3){
    //         cout<<-1<<endl;
    //         return;
    //     }
    // }
    //    for(int i=0;i<factors.size();i++){
    //     if(factors[i]==2) count_two++;
    //     else count_three++;
    //    }
    //    if(count_three<count_two) {
    //     cout<<-1<<endl;
    //     return;
    //    } 
    //    else{
    //     cout<<count_three+(count_three-count_two)<<endl;
    //    }
    while(n%2==0){
        count_two++;
        n=n/2;
    }
    while(n%3==0){
        count_three++;
        n=n/3;
    }
    if(n>1 || count_three<count_two) {
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<count_three+(count_three-count_two)<<endl;
    }
    
}
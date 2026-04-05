#include <bits/stdc++.h>
using namespace std;
void solve();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t = 1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

void solve() {
    long long n, m, i, j, k, count = 0, ans = 0, maxi = LLONG_MIN, sum = 0;
    bool pos = false;
    vector<long long>a(7);
    for(long long i=0;i<7;i++) {
        cin >> a[i];
    }
    vector<int>presum(7);
    for(int i=0;i<7;i++){
        int sum=0;
        for(int j=0;j<7;j++){
            if(i==j) sum+=a[i];
            else{
                sum+=(a[j]*-1);
            }
        }
        presum[i]=sum;
    }
    cout<<*max_element(presum.begin(),presum.end())<<endl;
}
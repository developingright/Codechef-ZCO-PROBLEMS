#include<bits/stdc++.h>

using namespace std;
vector<int> a,dp;

int main(){
    int N; cin>>N;
    a.resize(N);
    dp.resize(N,0);
    for (int i = 0 ; i < N ; ++i){
        cin>>a[i];
    }
    dp[0]= a[0];
    dp[1] = a[0]+a[1];
    dp[2] = max(a[2]+a[1],a[2]+a[0]);
    for(int i = 3 ; i < N ; ++i){
        dp[i] = max({dp[i-1],a[i]+dp[i-2],a[i]+a[i-1]+dp[i-3]});
    }
    cout<<dp[N-1]<<'\n';
    return 0;
}
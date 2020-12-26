#include <iostream>
#include<vector>
using namespace std;
#define ll long long

vector<long long int> a,dp;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	// your code goes here
	ll int N;cin>>N;
	a.resize(N);
	dp.resize(N,0);
	for (int i=0;i<N;i++){
		cin>>a[i];
	}
	dp[0] = a[0];
	dp[1]= min(a[1],a[0]);
	for (int i=2;i<N;i++){
		dp[i]=min(a[i]+dp[i-1],a[i-1]+dp[i-2]);
	}
	cout<<dp[N-1]<<endl;
	return 0;
}
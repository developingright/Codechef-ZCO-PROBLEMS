#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long
vector<long long int>a;

int binary(vector<long long int> &a,long long int x,int k,int n,int i){
    int l= i;int r =n;
    
    while(r-l>1){
        int mid = l+(r-l)/2;
        if (abs(a[mid]-x)>=k){
            r = mid;
        }
        else{
            l = mid;
        }
    }
    return r;   
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll int n,k; cin>>n>>k;
    int count=0;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for (int i=0;i<n;i++){
        int f = binary(a,a[i],k,n,i);
        count+=n-f;
    }
    cout<<count<<endl;

    return 0;
}
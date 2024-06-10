#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll int z=1e9+7;
ll int rec(ll int n,ll int p){
    if(p==0)return 1;
    if(p==1)return n;
    ll int ans;
    ans= rec(n,p/2);
    ans*=ans;
    ans%=z;
    if(p%2!=0){
        ans*=n;
        ans%=z;
    }
    return ans;
}
int main(){
    #define int long long int
    int n;
    cin>>n;
    cout<<rec(2,n)<<endl;
}
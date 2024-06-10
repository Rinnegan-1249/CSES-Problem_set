#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n;
    cin>>n;
    int i=1;
    int sum=n;
    sum*=(n+1);
    sum/=2;
    while(i<n){
        int x;
        cin>>x;
        sum-=x;
        i++;
    }
    cout<<sum;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n;
    cin>>n;
    int sum=0;
    while(n!=0){
        n/=5;
        sum+=n;
    }
    cout<<sum<<endl;
}
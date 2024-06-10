#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n;
    cin>>n;
    int i=0;
    int max=0;
    int sum=0;
    while(i<n){
        int x;
        cin>>x;
        if(max<x){
            max=x;
        }
        sum+=(max-x);
        i++;
    }
    cout<<sum<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int  a1=i*i;
        int a2=a1*(a1-1)/2;
        cout<<a2-4*(i-1)*(i-2)<<"\n";
    }
    
}
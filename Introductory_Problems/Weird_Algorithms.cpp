#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            n/=2;
        }
        else{
            n*=3;
            n++;
        }
        cout<<n<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int 
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int a,b;
    cin>>a>>b;
    if(a<b)swap(a,b);
    if((a+b)%3!=0){
        cout<<"NO"<<"\n";
    }
    else if(a>2*b){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
    }
    }
}
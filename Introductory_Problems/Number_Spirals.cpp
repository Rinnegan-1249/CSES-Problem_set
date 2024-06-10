#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int z;
    cin>>z;
    for(int i=0;i<z;i++){
    int x,y;
    cin>>y>>x;
    int t=max(x,y);
    int ans=0;
    if(t%2==0){
        //t,1
        ans-=abs(t-y);
        ans-=abs(x-1);
    }
    else{
        ans-=abs(t-x);
        ans-=abs(y-1);
    }
    t*=t;
    ans+=t;
    cout<<ans<<"\n";
    }
}
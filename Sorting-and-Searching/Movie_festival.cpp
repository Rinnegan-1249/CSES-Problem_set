#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n;
    cin>>n;
    int i=0;
    set<pair<int,int> > a;
    while(i<n){
        int b,d;
        cin>>b>>d;
        pair<int,int> c;
        c.first=d;
        c.second=b;
        a.insert(c);
        i++;
    }
    int ans=1;
    auto pit=a.begin();
    auto it=a.begin();
    it++;
    while(it!=a.end()){
        if((*it).second>=(*pit).first){
            ans++;
            pit=it;
            it++;
        }
        else{
            it++;
        }
    }
    cout<<ans<<endl;
}
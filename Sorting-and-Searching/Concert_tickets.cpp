#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    #define int long long int
    int n,m;
    cin>>n>>m;
    multiset<int> a;
    vector<int> b(m);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.insert(x);
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int j=0;
    while(j<m){
        auto it= a.lower_bound(b[j]);
        if(a.empty()){
            break;
        }
        if(it==a.end()){
            it--;
        }
        while(*it>b[j]&&it!=a.begin()){
            it--;
        }
        if(it==a.begin()&&*it<=b[j]){
            cout<<*it<<endl;
            a.erase(it);
        }
        else if(it==a.begin()){
            cout<<-1<<endl;
        }
        else{
            cout<<*it<<endl;
            a.erase(it);
        }
        j++;
    }
    while(j<m){
        cout<<-1<<endl;
        j++;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n;
    cin>>n;
    int i=0;
    set<pair<int,int> > a;
    while(i<n){
        int b;
        cin>>b;
        pair<int,int> c;
        c.first=b;
        c.second=1;
        a.insert(c);
        cin>>b;
        c.first=b;
        c.second=-1;
        a.insert(c);
        i++;
    }
    int max=0;
    int sum=0;
    auto it=a.begin();
    while(it!=a.end()){
        sum+=(*it).second;
        if(max<sum){
            max=sum;
        }
        it++;
    }
    cout<<max<<endl;
}
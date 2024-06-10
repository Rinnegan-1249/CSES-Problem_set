#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    auto it=a.begin();
    auto pit=it;
    it++;
    int max=1;
    int sum=1;
    while(it!=a.end()){
        if(*it==*pit){
            sum++;
        }
        else{
            sum=1;
        }
        if(max<sum){
            max=sum;
        }
        it++;
        pit++;
    }
    cout<<max<<endl;
}
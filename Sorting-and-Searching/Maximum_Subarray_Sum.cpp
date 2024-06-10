#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n;
    cin>>n;
    vector<int> a(n);
    int i=0;
    while(i<n){
        cin>>a[i];
        i++;
    }
    i=0;
    int sum=0;
    sum+=a[0];
    i++;
    int max=a[0];
    while(i<n){
        if(sum+a[i]<a[i]){
            sum=a[i];
        }
        else{
            sum+=a[i];
        }
        i++;
        if(sum>max){
            max=sum;
        }
    }
    cout<<max<<endl;
}
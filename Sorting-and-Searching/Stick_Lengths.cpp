#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void merge(vector<ll >& a,ll int start,ll int end,ll int r){
    vector<ll int> dum1(r-start+1);
    vector<ll int> dum2(end-r);
    ll int i=0;
    while(i<r-start+1){
        dum1[i]=a[i+start];
        i++;
    }
    i=0;
    while(i<end-r){
        dum2[i]=a[i+r+1];
        i++;
    }
    i=0;
    ll int j=0;
    ll int k=start;
    while(i<r-start+1&&j<end-r){
        if(dum1[i]<dum2[j]){
            a[k]=dum1[i];
            i++;
            k++;
        }
        else{
            a[k]=dum2[j];
            k++;
            j++;
        }
    }
    while(i<r-start+1){
        a[k]=dum1[i];
        k++;
        i++;
    }
    while(j<end-r){
        a[k]=dum2[j];
        k++;
        j++;
    }
}
void merge_sort1(vector<ll int>& a,ll int start,ll int end){
    if(start==end){
        return;
    }
    ll int r=start+(end-start)/2;
    merge_sort1(a,start,r);
    merge_sort1(a,r+1,end);
    merge(a,start,end,r);
 
}
int main(){
    #define int long long int 
    int n;
    cin>>n;
    int i=0;
    vector<int> a(n);
    while(i<n){
        cin>>a[i];
        i++;
    }
    merge_sort1(a,0,n-1);
    i=0;
    int ans=0;
    int val=a[n/2];
    while(i<n){
        ans+=abs(a[i]-val);
        i++;
    }
    cout<<ans<<endl;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void merge(vector<ll int>& a,ll int p,ll int r){
    ll int q=p+(r-p)/2;
    vector<ll int> dum1(q-p+1);
    vector<ll int> dum2(r-q);
    ll int i=0;
    while(i<q-p+1){
        dum1[i]=a[i+p];
        i++;
    }
    i=0;
    while(i<r-q){
        dum2[i]=a[i+q+1];
        i++;
    }
    i=0;
    ll int j=0;
    ll int k=p;
    while(i<q-p+1&&j<r-q){
        if(dum1[i]<dum2[j]){
            a[k]=dum1[i];
            i++;
            k++;
        }
        else{
            a[k]=dum2[j];
            j++;
            k++;
        }
    }
    while(i<q-p+1){
        a[k]=dum1[i];
        i++;
        k++;
    }
    while(j<r-q){
        a[k]=dum2[j];
        j++;
        k++;
    }
}
void merge_sort(vector<ll int>& a,ll int p, ll int r){
    if(p==r){
        return;
    }
    ll int q=p+(r-p)/2;
    merge_sort(a,p,q);
    merge_sort(a,q+1,r);
    merge(a,p,r);
}
int main(){
    #define int long long int
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    merge_sort(a,0,n-1);
    merge_sort(b,0,m-1);
    int answer=0;
    int i=0;
    int j=0;
    while(i<n&&j<m){
        if(abs(a[i]-b[j])<=k){
            answer++;
            i++;
            j++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            i++;
        }
    }
    cout<<answer<<endl;
    
}
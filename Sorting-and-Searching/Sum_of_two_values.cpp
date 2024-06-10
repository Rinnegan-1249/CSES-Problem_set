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
bool binary_search(vector<ll int>& a,ll int p, ll int r,ll int el){
    
    ll int q=p +(r-p)/2;
    if(a[q]==el){
        return true;
    }
    if(p==q){
        return false;
    }
    if(a[q]<el){
        return binary_search(a,q+1,r,el);
    }
    if(a[q]>el){
        return binary_search(a,p,q-1,el);
    }
}
int linear_search(vector<ll int>& a,ll int key,ll int skip){
    ll int i=0;
    while(i<a.size()){
        if(i==skip){
            i++;
        }
        if(a[i]==key){
            return i+1;
        }
        i++;
    }
}
int main(){
    #define int long long int 
    int n;
    cin>>n;
    int key;
    cin>>key;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    merge_sort1(a,0,n-1);
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    bool x= false;
    int i=0;
    while(i<n){
        if(key-a[i]<a[0]){
            break;
        }
        if(binary_search(a,0,n-1,key-a[i])){
            if(a[i]==key-a[i]){
                if(a[i+1]==a[i]||a[i-1]==a[i]){
                    x=true;
                }
            }
            else{
                x=true;
            }
        }
        if(x){
            break;
        }
        i++;
    }
    if(x){
        int s1=linear_search(b,a[i],-1);
        cout<<s1<<" "<<linear_search(b,key-a[i],s1-1);
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }
}
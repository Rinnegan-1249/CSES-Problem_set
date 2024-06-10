#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
    }
    else if(n==2||n==3){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        int odd=n;
        while(odd!=0){
            if(odd%2!=0){
            cout<<odd<<" ";
            }
            odd--;
        }
        while(n!=0){
            if(n%2==0){
            cout<<n<<" ";
            }
            n--;
        }
    }
}
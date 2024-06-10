#include<bits/stdc++.h>
using namespace std;
int main(){
    int d;
    cin>>d;
    if(d%4==1){
        cout<<"NO";
    }
    else if(d%4==2){
        cout<<"NO"; 
    }
    else if(d%4==3){
        cout<<"YES"<<endl;
        cout<<d/2 +1<<endl;
        cout<<"1 2 ";
        for(int k=4;k<=d;k++){
            if(k%4==0||k%4==3){
                cout<<k<<" ";
            }
        }
        cout<<endl<<d/2<<endl;
        cout<<"3 ";
        for(int k=4;k<=d;k++){
            if(k%4==1||k%4==2){
                cout<<k<<" ";
            }
        }
    }
    else{
        cout<<"YES"<<endl;
        cout<<endl<<d/2<<endl;
        for(int k=1;k<=d;k++){
            if(k%4==0||k%4==1){
                cout<<k<<" ";
            }
        }
        cout<<endl<<d/2<<endl;
        for(int k=1;k<=d;k++){
            if(k%4==3||k%4==2){
                cout<<k<<" ";
            }
        }
    }
}
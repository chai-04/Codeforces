#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        int b;
        int n;
        cin>>a;
        cin>>b;
        cin>>n;
        int p=0;
        while(a<=n && b<=n){
            if(a>b){b+=a;}
            else{a+=b;}
            p++;
           }
           cout<<p<<endl;

        }
        
        return 0;
        
    }
    


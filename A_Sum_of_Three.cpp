#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3==0){
            if((n-5) !=1 && (n-5) !=4 && (n-5)>0){
                cout<<"YES"<<endl;
               cout<<"1"<<" "<<"4"<<" "<<n-5<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if((n-3) !=1 && (n-3) !=2 && (n-3)>0){
                cout<<"YES"<<endl;
                cout<<"1"<<" "<<"2"<<" "<<n-3<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
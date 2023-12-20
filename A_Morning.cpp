#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string pin;
        cin>>pin;
        for(int i=0;i<4;i++){
            if(pin[i]=='0'){
            pin[i]=':';
        }
        }
        int a=abs(((int)pin[0]-48)-1);
        int b=abs(((int)pin[1]-48)-((int)pin[0]-48));
        int c=abs(((int)pin[2]-48)-((int)pin[1]-48));
        int d=abs(((int)pin[3]-48)-((int)pin[2]-48));
        int ans=4+a+b+c+d;
        cout<<ans<<endl;
          
    }
    return 0;
}
        

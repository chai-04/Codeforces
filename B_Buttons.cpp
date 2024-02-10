#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=2;i<=n;i++){
        if(n-i>=0){
            ans+=(1+(n-i)*i);
        }
        else{
            break;
        }
    }
    ans+=n;
    if(n==1){
        cout<<"1"<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}
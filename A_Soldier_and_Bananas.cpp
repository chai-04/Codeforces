#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int n;
    cin>>n;
    int w;
    cin>>w;
    int cost=0;
    for(int i=0;i<w;i++){
        cost+=k*(i+1);
    }
    int ans=cost-n;
    if(ans<0){
        cout<<"0";
    }
    else{
        cout<<ans;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    vector<int>ans;
    int pow=1;
    while(n>0){
       if(n%10!=0){
        ans.push_back(n%10*pow);
       } 
       pow*=10;
       n/=10;
    }
    int k=ans.size();
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    }
    return 0;
    
}
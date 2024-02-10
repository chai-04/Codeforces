#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    int ans=0;
    int i=0;
    int res;
    while(ans<n){        
        ans+=arr[i]; 
        res=i+1;       
        i++;
        if(i>6){
            i=0;
        }       
    }
    cout<<res;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    string names ="TCODI";
    int ans=0;
    int arr[5]={4,6,8,12,20};
    while(n--){
        cin>>s;
        for(int i=0;i<5;i++){
            if(s[0]==names[i]){
                ans+=arr[i];
                break;
            }
        }
    }
    cout<<ans;
    return 0;

}
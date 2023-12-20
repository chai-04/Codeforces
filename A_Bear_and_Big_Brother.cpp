#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int ans=0;
    while(1){
        a*=3;
        b*=2;
        ans++;
        if(a>b){
            break;
        }
    }
    cout<<ans;
    return 0;
}
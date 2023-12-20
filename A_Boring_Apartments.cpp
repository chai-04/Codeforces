#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p=0;
        while(n>10){
            n/=10;
            p++;

        }
        int q=p+1;
        int ans=(n-1)*10+((q*(q+1))/2);
        cout<<ans<<endl;
    }
    return 0;
}
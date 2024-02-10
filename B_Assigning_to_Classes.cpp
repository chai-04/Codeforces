#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    n*=2;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<int>cls1;
    vector<int>cls2;
    bool flag=true;
    if(n%4!=0){
        for(int i=0;i<n;i++){
            if(flag){
            cls1.push_back(arr[i]);
            flag=false;
        }
        else{
            cls2.push_back(arr[i]);
            flag=true;
        }
        }
           }
    else{
        for(int i=0;i<n;i++){
            if(flag){
            cls1.push_back(arr[i]);
            if(i!=n-2){flag=false;}
        }
        else{
            cls2.push_back(arr[i]);
            if(i!=n-2){flag=true;}
        }
        }
    }
    int s1=cls1.size();
    int s2=cls2.size();
    int med1=cls1[s1/2];
    int med2=cls2[s2/2];
    int ans=abs(med1-med2);
    cout<<ans<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
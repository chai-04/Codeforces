#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        int p=s.size();
        if(p=1){
            cout<<"0";
        }
        else if(p=2){
            int a,b;
            auto it=s.begin();
            a=*it;
            b=*(it++);
            cout<<b-a;
        }
        else if(p=3){
            int p,q,r;
            auto it=s.begin();
            p=*it;
            q=*(it++);
            r=*(it+2);
            if(2*q=p+r){
                cout<<r-q;
            }
            else{
                cout<<"-1";
            }

        }
    }
    return 0;

}
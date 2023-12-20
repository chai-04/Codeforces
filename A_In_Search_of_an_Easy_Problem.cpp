#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            ans=1;
            break;
        }
    }
    if(ans==1){
        cout<<"hard";
    }
    else{
        cout<<"easy";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    while(n--){
        cin>>k;
        if(k==1){
            cout<<"hard";
            break;
        }
    }
}
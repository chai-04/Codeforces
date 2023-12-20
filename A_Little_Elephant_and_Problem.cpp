#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr1[n];
    for(int i=0;i<n;i++){
        arr1[i]=arr[i];
    }
    sort(arr1,arr1+n);
    int p=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr1[i]){
            p++;
        }
    }
    if(p>2){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}
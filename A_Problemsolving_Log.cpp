#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=(int)s[i]-64;
        }
        sort(arr,arr+n);
        int arr1[26];
        for(int i=0;i<26;i++){
            arr1[i]=0;
        }
        


    }
}
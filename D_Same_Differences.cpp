#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int arr1[n];
        for(int i=0;i<n;i++){
            arr1[i]=arr[i]-i;
        }
        2 2 4 4
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr1[i]]+=1;

        }
        2->2
        4->2
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr1[i]==arr1[j]){
                    count++;
                }
            }
        }


    }
    return 0;

}
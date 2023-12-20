#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0;
    int maxi;
    int min=100;
    int mini;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            maxi=i;
        }
        if(arr[i]<=min){
            min=arr[i];
            mini=i;
        }
    }
    if(maxi<mini){
        int p=maxi+(n-1-mini);
        cout<<p;
    }
    else{
        int q=maxi+(n-1-(mini+1));
        cout<<q;
    }
    return 0;

}
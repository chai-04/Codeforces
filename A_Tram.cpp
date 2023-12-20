#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int p=0;
    for(int i=0;i<n;i++){
        int a;
        int b;
        cin>>a>>b;
        p=(p-a+b);
        arr[i]=p;
    }
    sort(arr,arr+n);
    cout<<arr[n-1];
    return 0;
}
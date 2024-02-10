#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>vec;
    int a;
    for(int i=0;i<n;i++){
            cin>>a;
            vec.push_back(a);
    }
    int count=0;
    for(int i=1;i<n;i++){
        if(vec[i]!=vec[i-1]){
            count++;
        }
    }
    cout<<count+1;
    return 0;
}
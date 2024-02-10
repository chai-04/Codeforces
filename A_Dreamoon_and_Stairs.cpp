#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int x=0,y=0;
    vector<int>min;
    while(2*x<=n){
        y=n-(2*x);
        int sum=(x+y);
        if(sum%m==0){
            min.push_back(sum);
        }
        x++;
    }
    sort(min.begin(),min.end());
    int len=min.size();
    if(len==0){
        cout<<"-1";
    }
    else{
        cout<<min[0];
    }
    return 0;

}
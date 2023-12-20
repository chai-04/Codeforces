#include<bits/stdc++.h>
using namespace std;
const int maxi=100000;
vector<int>dp(maxi,-1);

int fib(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]= fib(n-1)+fib(n-2);
    }
}
int main(){
    
    
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;

}

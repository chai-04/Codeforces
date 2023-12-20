#include<bits/stdc++.h>
using namespace std;
int main(){
    string num;
    cin>>num;
    int n=num.size();
    for(int i=0;i<n;i++){
        if(((int)num[i]-'0')>5){
            int p=9-((int)num[i]-'0');
            num[i]=p+'0';
        }
    }
    cout<<num;
    return 0;
    }
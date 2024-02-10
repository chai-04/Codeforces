#include<bits/stdc++.h>
using namespace std;
int main(){
    bool flag=true;
    int num;
    cin>>num;
    num++;
    string s;
    while(flag){
    s=to_string(num);
    int n=s.size();
    set<char>ss;
    for(int i=0;i<n;i++){
        ss.insert(s[i]);
    }
    int m=ss.size();
    if(m==n){
        cout<<num;
        flag=false;
    }
    else{
        num++;
        ss.clear();
    }
    }
    return 0;
}
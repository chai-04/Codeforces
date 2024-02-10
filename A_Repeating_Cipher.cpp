#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<char>res;
    int p=0;
    for(int i=0;i+p<n;i+=p){
        res.push_back(str[i]);
        p++;
    }
    int len=res.size();
    for(int i=0;i<len;i++){
        cout<<res[i];
    }
    return 0;
}
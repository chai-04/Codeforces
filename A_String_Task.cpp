#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<char>ans;
    for(int i=0;i<str.size();i++){
        str[i]=tolower(str[i]);
    }
    string vows="aeiouy";
    int p=0;
    for(int i=0;i<str.size();i++){
        for(int j=0;j<6;j++){
            if(str[i]!=vows[j]){
                 p++;   
            }
        }
        if(p==6){
            ans.push_back(str[i]);
       }
       p=0;
    }
    int n=ans.size();
    for(int i=0;i<n;i++){
        cout<<"."<<ans[i];
    }
    return 0;
}
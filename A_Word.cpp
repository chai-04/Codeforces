#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=s.size();
    int upper=0,lower=0;
    for(int i=0;i<len;i++){
        int ascii=(int)s[i];
        if(ascii>90){
            lower++;
        }
        else{
            upper++;
        }
    }
    if(upper>lower){
        for(int i=0;i<len;i++){
            s[i]=toupper(s[i]);
        }
    }
    else{
        for(int i=0;i<len;i++){
            s[i]=tolower(s[i]);
        }
    }
    cout<<s;
    return 0;

    }

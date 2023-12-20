#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.size();
    int cnt1=0;
    int cnt2=0;
    int cnt3=0;
    for(int i=0;i<n;i+=2){
        int p=((int)str[i]-'0');
        if(p==1){
            cnt1++;
        }
        else if(p==2){
            cnt2++;
        }
        else{
            cnt3++;
        }
    }
    string str1;
    string str2;
    string str3;
    while(cnt1--){
        str1+="1+";
    }
    while(cnt2--){
        str2+="2+";
    }
    while(cnt3--){
        str3+="3+";
    }
    string ans=str1+str2+str3;
    ans.pop_back();
    cout<<ans;


    return 0;


}
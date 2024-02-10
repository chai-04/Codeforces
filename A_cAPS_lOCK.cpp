#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    vector<int>vec;
    for(int i=0;i<n;i++){
        vec.push_back((int)s[i]);
    }
    bool flag=false;
    int count=0;
    if(vec[0]>90){
        flag=true;
    }
    for(int i=1;i<n;i++){
        if(vec[i]<=90){
            count++;
        }
    }
       
    if(count==n-1){
        if(flag==true){
            s[0]=toupper(s[0]);
            for(int i=1;i<n;i++){
                s[i]=tolower(s[i]);
            }
        }
        else{
            for(int i=0;i<n;i++){
                s[i]=tolower(s[i]);
            }
        }
    }
    cout<<s;
    return 0;

}
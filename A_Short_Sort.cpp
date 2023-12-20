#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string name;
        for(int i=0;i<3;i++){
            cin>>name[i];
        }
        if(name[0]=='a'|| name[1]=='b'|| name[2]=='c'){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
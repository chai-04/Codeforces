#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(b%a==0){
        int d=(b/a);
    int x=0,y=0;
    while(d%2==0){
        d/=2;
        x++;
    }
    while(d%3==0){
        d/=3;
        y++;
    }
    if(d==1){
        cout<<x+y<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    }
    else{
        cout<<"-1"<<endl;
    }
    
    return 0;
}
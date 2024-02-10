#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int x;
    int y;
    int dir[4];
    for(int i=0;i<4;i++){
        dir[i]=0;
    }
    while(n--){
        cin>>x>>y;
        if(x>0){
            dir[0]++;
        }
        else if(x<0){
            dir[1]++;
        }
        else{}

        if(y>0){
            dir[2]++;
        }
        else if(y<0){
            dir[3]++;
        }
        else{}   
    }   
    int flag=0;
    for(int i=0;i<4;i++){
        if(dir[i]>0){
            flag++;
        }
    }
    if(flag==4){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }


}

int main(){
    int t;
    cin>>t;   
    while(t--){
        solve();
    }
    return 0;
}
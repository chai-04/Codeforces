#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> vec(5, vector<int>(5)); 
    int a=0;
    int b=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>vec[i][j];
        }
    }
    for(int i=0;i<5;i++){
        bool found=false;
        for(int j=0;j<5;j++){
            if(vec[i][j]==1){
                a=i;
                b=j;
                found=true;
                break;
            }
            
        }
        if(found){
            break;
        }
    }
    int p=abs(3-a);
    int q=abs(3-b);
    int ans=p+q;
    cout<<ans;
    return 0;
}
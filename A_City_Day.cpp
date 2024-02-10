#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>vec;
    int value;
    int flag=0;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>value;
        vec.push_back(value);
    }
    //cout<<vec[0]<<endl;
    for(int i=0;i<n;i++){
        flag = 0;
        for(int j=1;j<=x;j++){
            if((i-j)>=0){
                if(vec[i]>=vec[i-j]){
                    flag=1;
                    break;
                }
            }
        }
    if(flag==1){
        continue;
    }
    flag=0;
        for(int j=1;j<=y;j++){
        if((i+j)<n){
            if(vec[i]>=vec[i+j]){
                flag=1;
                break;
            }
        }
        }
       // cout<<"fal"<<flag<<endl;
    if(flag==0){
        ans=(i+1);
        break;
    }
    }
    cout<<ans<<endl;
    return 0;
    
}